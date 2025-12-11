#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

typedef struct
{
    char name[100];
    int year;
} Attraction;

typedef struct
{
    char name[100];
    char country[100];
    Attraction* attractions;
    int count;
    int capacity;
} City;

void initCity(City* city)
{
    city->count = 0;
    city->capacity = 2;
    city->attractions = (Attraction*)malloc(city->capacity * sizeof(Attraction));
    if (city->attractions == NULL)
    {
        printf("Ошибка выделения памяти!\n");
        exit(1);
    }
}

void addAttraction(City* city, const char* name, int year)
{
    if (city->count >= city->capacity)
    {
        city->capacity *= 2;
        Attraction* temp = (Attraction*)realloc(city->attractions,
            city->capacity * sizeof(Attraction));
        if (temp == NULL)
        {
            printf("Ошибка перевыделения памяти!\n");
            free(city->attractions);
            exit(1);
        }
        city->attractions = temp;
    }
    strncpy(city->attractions[city->count].name, name,
        sizeof(city->attractions[city->count].name) - 1);
    city->attractions[city->count].name[sizeof(city->attractions[city->count].name) - 1] = '\0';
    city->attractions[city->count].year = year;
    city->count++;
}

void freeCity(City* city)
{
    if (city->attractions != NULL)
    {
        free(city->attractions);
        city->attractions = NULL;
    }
    city->count = 0;
    city->capacity = 0;
}

void printCity(const City* city)
{
    printf("\nГород: %s, Страна: %s\n", city->name, city->country);
    printf("Количество достопримечательностей: %d\n", city->count);
    if (city->count > 0)
    {
        printf("Достопримечательности:\n");
        for (int i = 0; i < city->count; i++)
        {
            printf("  %d. %s (год создания: %d)\n",
                i + 1,
                city->attractions[i].name,
                city->attractions[i].year);
        }
    }
    else {
        printf("Нет достопримечательностей\n");
    }
}

City* findCityWithMostAttractions(City* cities, int n)
{
    if (n <= 0) return NULL;
    City* maxCity = &cities[0];
    for (int i = 1; i < n; i++)
    {
        if (cities[i].count > maxCity->count)
        {
            maxCity = &cities[i];
        }
    }
    return maxCity;
}

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    
    }
}

void removeNewline(char* str)
{
    if (str == NULL) return;
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;

    printf("Количество городов: ");
    scanf("%d", &n);
    clearInputBuffer();

    if (n <= 0)
    {
        printf("Ошибка! Количество отрицательное. \n");
        return 1;
    }

    City* cities = (City*)malloc(n * sizeof(City));
    if (cities == NULL)
    {
        printf("Ошибка! \n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n Город %d \n", i + 1);
        printf("Название города: ");
        fgets(cities[i].name, sizeof(cities[i].name), stdin);
        removeNewline(cities[i].name);
        printf("Страна: ");
        fgets(cities[i].country, sizeof(cities[i].country), stdin);
        removeNewline(cities[i].country);
        initCity(&cities[i]);
        int m;
        printf("Количество достопримечательностей: ");
        scanf("%d", &m);
        clearInputBuffer();
        if (m > 0) {
            for (int j = 0; j < m; j++)
            {
                char attractionName[100];
                int year;
                printf("  Достопримечательность %d:\n", j + 1);
                printf("    Название: ");
                fgets(attractionName, sizeof(attractionName), stdin);
                removeNewline(attractionName);
                printf("    Год создания: ");
                scanf("%d", &year);
                clearInputBuffer();
                addAttraction(&cities[i], attractionName, year);
            }
        }
    }

    printf("\n Сводка городов и их данных. \n");
    for (int i = 0; i < n; i++)
    {
        printCity(&cities[i]);
    }

    printf("\n Город с наибольшим количеством достопримечательностей: \n");
    City* cityWithMost = findCityWithMostAttractions(cities, n);
    if (cityWithMost != NULL)
    {
        printCity(cityWithMost);
    }

    for (int i = 0; i < n; i++)
    {
        freeCity(&cities[i]);
    }
    free(cities);

    return 0;
}