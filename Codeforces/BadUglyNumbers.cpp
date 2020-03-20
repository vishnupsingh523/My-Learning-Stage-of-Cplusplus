#include<iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int arr[t];        
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t;i++)
    if(arr[i]==1)
    cout<<-1<<endl;
    else{
    for(int  j= 0 ;j < arr[i];j++)
    {
        if(j==0)
        cout<<2;
        else
        cout<<3;
    }        cout<<endl;

    }
    
    return 0;
}