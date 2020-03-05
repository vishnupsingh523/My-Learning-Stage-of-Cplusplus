#include<iostream>
#include<stdlib.h>
using namespace std;

// this is about the operator overloding... an important concept of c++

class score{
    int val;
    string name;
    public:
    score(){
        val=0;
        name="Vishnu";
    }

    void operator ++(){
        val=val-20;
        name=name+ " Papa hai tumhare.";
    }

    void show(){
        cout<<endl<<val<<endl<<name;
    }
};

int main()
{
    system("cls");
    score s1,s2;
    ++s1;
    ++s2;
    ++s2;
    s1.show();
    s2.show();
    
    return 0;
}