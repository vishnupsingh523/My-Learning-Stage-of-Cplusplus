#include<iostream>
#include<list>
#include<cstring>

using namespace std;

class HashTable{
    private:
    static const int hashGroups = 10;
    list<pair<int,string>> table[hashGroups];

    public:
    bool isEmpty() const;
    int hashFunction(int key);
    

}