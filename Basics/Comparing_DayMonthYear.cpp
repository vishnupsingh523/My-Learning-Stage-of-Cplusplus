#include<iostream>
using namespace std;

class Date{
    int day,month,year;

    public:
    Date(): day(0),month(0),year(0){}
    void getdata(){
        cout<<"Enter the data:\n";
        cout<<"Day: ";cin>>day;
        cout<<endl<<"Month: ";cin>>month;
        cout<<endl<<"Year: "; cin>>year;
    }

    int operator ==(Date D)
    {
        if(day==D.day&&month==D.month&&year==D.year)
        return 1;
        else 
        return 0;
    }
    
};

int main(){
    Date d1,d2;
    d1.getdata();
    d2.getdata();
    if(d1==d2)
    cout<<endl<<"The dates are  equal.";
    else
    {
            cout<<endl<<"The dates are not equal.";

    }
    return 0;

}