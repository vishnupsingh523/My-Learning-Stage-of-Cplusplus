#include<iostream>

using namespace std;

class student
{
    string name;
    int reg;
    public:

    student():reg(0),name("") {}
    void get_data(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter registration no: ";
        cin>>reg;
    }
    void show_data(){
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Registration No: "<<reg;
    }
};

int main()
{
    student s1;
    s1.get_data();
    cout<<"\nPrinting the value of 1st object:";
    s1.show_data();

    student s2=s1;      //second object is created of the class student
    cout<<"\nPrinting the value of 2nd object:";
    s2.show_data();

    student s;      //this is the third object of the class student
    s.operator=(s1);
    cout<<"\nPrinting the value of 3rd object:";
    s.show_data();

    return 0;
}