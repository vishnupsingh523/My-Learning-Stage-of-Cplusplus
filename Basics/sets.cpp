#include<iostream>
#include<set>
#include<functional>
#include<string>

using namespace std;

class Person{
    public: 
    float age;
    string name;
    bool operator <(const Person& rhs) const{
        return age<rhs.age;
    }
};

int main(){

    set<Person> Set;
    Set.insert(20,"Rupesh");
    Set.insert(30,"Rajesh");
    set<int>::iterator i=Set.begin();
    for(;i!=Set.end();i++)
    {
        cout<<Set.age<<Set.name<<endl;

    }
        
    return 0;
}