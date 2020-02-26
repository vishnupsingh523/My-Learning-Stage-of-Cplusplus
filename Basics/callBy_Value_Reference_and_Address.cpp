#include<iostream>
using namespace std;

int main()
{
    void sum(int a,int &b,int *f);

    int c,d,e;
    cout<<"Enter three values: ";
    cin>>c>>d>>e;
    sum(c,d,&e);
    cout<<"\na="<<c<<"\tb="<<d<<"\tc="<<e;
    return 0;
}
void sum(int a,int &b,int *f){
a=a+1;
b=b+1;
*f=*f+1;
cout<<endl<<"a="<<a<<"\tb="<<b<<"\tc="<<*f;
}