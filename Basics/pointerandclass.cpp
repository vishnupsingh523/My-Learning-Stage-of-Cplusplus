#include<iostream>
#include<conio.h>

using namespace std;
class book{
    int *price;
    int *year;
    int x,y;
    public:
    void getdata();
    void putdata();
};

void book::getdata(){
    
    cout<<"Enter the Price: ";
    cin>>x;
    price=&x;
    cout<<endl<<"Enter the Year: ";
    cin>>y;
    year=&y;
}

void book::putdata(){
    cout<<endl<<"The entered values are: \n";
    cout<<endl<<"Price: "<<*price<<endl<<"Year: "<<*year;
}

int main()
{
    book b;
    b.getdata();
    b.putdata();

    return 0;
}