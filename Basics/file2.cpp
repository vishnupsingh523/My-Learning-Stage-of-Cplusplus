#include<iostream>

using namespace std;

void sum()
{
    string enter;
    cout<<"Enter an string: ";
    cin>>enter;
    string sum;
    sum= enter + " Hello!";
    cout<<sum;
}

class student{
    int roll;
    int marks;
    public:
    void getdata(){
        cout<<endl<<"Enter Rollno: ";
        cin>>roll;
        cout<<endl<<"Enter Marks: ";
        cin>>marks;
    }
    void showdata();
};
void student:: showdata()
{
    cout<<"\n\nThe values which you have entered are as follows: "<<endl<<roll<<endl<<marks<<" %";
}