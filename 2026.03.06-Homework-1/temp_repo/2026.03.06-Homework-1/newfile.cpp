#include <iostream>
#include <fstream>

class ArrayList
{
    public:
        int size;
        int capacity;
        double* data;
        
         ArrayList()
         {
             size = 0;
             capacity = 4;
             data = new double [capacity] {0};
         }
         ~ArrayList()
         {
             delete[ ]data;
         }
         int getSize()
         {
             return size;
         }
         void resize (int newCapacity)
         {
             double* newData = new double [newCapacity] {0};
             for (int  i = 0;  i < size; i++)
             {
                 newData[i] = data [i];
             }
             delete [ ]data;
             data = newData;
             capacity = newCapacity;
         }
         void add (double value)
         {
             if (size == capacity)
             {
                 resize(capacity * 2);
             }
             data[size] = value;
             ++size;
         }
         int get(int index)
         {
             if (0 <= index && index < size)
             {
                 return data[index];
             }
             return -1;
         }
         void set(int index, int value)
         {
             if (0 <= index && index < size)
             {
                 data[index] = value;
             }
             if (index == size)
             {
                 add(value);
             }
         }
         void print()
         {
             std:: cout << "["<<size<< "/" <<capacity<<"]{";
             for (int i = 0; i < size; ++i)
             {
                 std:: cout <<data[i]<<" ";
             }
             std:: cout<< "}"<< std:: endl;
         }
         void remove (int index)
         {
               if (index < 0 || index >= size)
               {
                   return;
               }
               for (int i = index; i < size - 1; ++i)
               {
                   data[i] = data[i + 1];
               }
               --size;
         }
         
         void insert(int index, double value)
         {
             if (index < 0 || index > size) return;
             if (size == capacity)
             {
                 resize(capacity * 2);
             }
             for (int i = size; i > index; --i)
             {
                 data[i] = data[i-1];
             }
             data[index] = value;
             ++size;
         }
         
         void clear()
         {
             size = 0;
         }
         
         int contains(double value)
         {
             for (int i = 0; i < size; ++i)
             {
                 if (data[i] == value) return 1;
             }
             return 0;
         }
         
         void saveToFile(const char* filename)
         {
             std::ofstream fout(filename, std::ios::binary);
             if (!fout.is_open()) return;
             fout.write(reinterpret_cast<char*>(&size), sizeof(int));
             fout.write(reinterpret_cast<char*>(&capacity), sizeof(int));
             fout.write(reinterpret_cast<char*>(data), size * sizeof(double));
             fout.close();
         }
         
         void loadFromFile(const char* filename)
         {
             std::ifstream fin(filename, std::ios::binary);
             if (!fin.is_open()) return;
             int newSize, newCapacity;
             fin.read(reinterpret_cast<char*>(&newSize), sizeof(int));
             fin.read(reinterpret_cast<char*>(&newCapacity), sizeof(int));
             if (newSize < 0 || newCapacity < newSize || newCapacity > 1000000)
             {
                 fin.close();
                 return;
             }
             delete[] data;
             data = new double[newCapacity] {0};
             size = newSize;
             capacity = newCapacity;
             fin.read(reinterpret_cast<char*>(data), size * sizeof(double));
             fin.close();
         }
};

int main()
{
               ArrayList list;
               list.add (0.5);
               list.add (1.5);
               list.add (2.5);
               std:: cout <<list.get(2)<< std:: endl;
               list.set(1, 3.5);
               list.remove(0);
               std:: cout <<list.getSize()<< std:: endl;
               list.print();
               
               list.insert(1, 9.9);
               list.print();
               std::cout << "contains - 2.5? " << list.contains(2.5) << std::endl;
               
               list.saveToFile("list.bin");
               
               ArrayList loadedList;
               loadedList.loadFromFile("list.bin");
               loadedList.print();
               
               list.clear();
               std::cout << "size after clear " << list.getSize() << std::endl;
               list.print();
               
               return 0;
}