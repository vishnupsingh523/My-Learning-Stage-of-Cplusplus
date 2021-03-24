#include<iostream>

using namespace std;

int main(){
    long long n;
    int  t;
    cin>>n>>t;

    if(n==1&&t<10)
    cout<<t;
    else if(n>1&&t<10){
        cout<<t;
        for(int i=0;i<n-2;i++)
        cout<<0;
        cout<<t;
    }
    else if(n==2&& t==10)
    {
        cout<<t;
        // for(int i=0;i<n-4;i++)
        // cout<<0;
        // cout<<t;
    }
    else if(n==3&& t==10)
    {
        cout<<110;
        // for(int i=0;i<n-4;i++)
        // cout<<0;
        // cout<<t;
    }
    else if(n>3&& t==10)
    {
        cout<<t;
        for(int i=0;i<n-4;i++)
        cout<<0;
        cout<<t;
    }
    else
    cout<<-1;
}