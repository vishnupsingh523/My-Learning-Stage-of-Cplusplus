#include<iostream>
using namespace std;

int main(){

    string enter;
    int n;
    cin>>n;
    cin>>enter;
    int zero=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(enter[i]=='z')
        zero++;
        else if(enter[i]=='n')
        one++;
    }

    for(int i=0;i<one;i++)
    cout<<1<<" ";
    for(int i=0;i<zero;i++)
    cout<<0<<" ";
}