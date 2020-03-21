#include<iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int value,max=0;
    while(t--)
    {
        scanf("%d",&value);
        printf("%d ",value+max);
        if(value+max>max)
        max+=value;
    }
    return 0;
}