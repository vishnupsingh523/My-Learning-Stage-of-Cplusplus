#include<iostream>
#include<conio.h>

using namespace std;
class student{
  public:
  int a=20;
};

int main()
{
    student obj;
    student *ptr;
    ptr=&obj;
    cout<<obj.a;
    cout<<endl<<ptr->a;
    
    return 0;
}