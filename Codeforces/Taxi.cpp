#include<iostream>

using namespace std;

int max(int a, int b)
{
    if(a>b)
    return a;
    else 
    return b;
}


int main()
{
    int size;
    cin>>size;
    int a=0,b=0,c=0,d=0,enter;
    for(int i=0;i<size;i++)
    {
        cin>>enter;
        if(enter ==1)
        a++;
        else if(enter==2)
        b++;
        else if(enter==3)
        c++;
        else
        {
            d++;
        }
    }

    cout<<d+c+(b*2 + max(0,a-c)+3)/4;
}
