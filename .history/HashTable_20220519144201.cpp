#include<iostream>
#include<list>
#include<cstring>

using namespace std;


class HashTable{
    private:
        static const int hashGroups = 10;
        list<pair<int,string>> table[hashGroups];//list 1 -> index 0, list2 -> index1....
    
    public:
        bool isEmpty() const;
        int hashFunction(int key);
        void insertItem(int key, string value);
        void removeItem(int key);
        string searchTable(int key);
        void printTable();
    
};

bool HashTable::isEmpty() const {
    
}



int main(){


return 0;
}