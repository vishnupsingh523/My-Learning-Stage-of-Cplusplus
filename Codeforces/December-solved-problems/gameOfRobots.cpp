#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define ll long long
#define fl float
#define db double
#define st string

int main(){
    ll n,k;
    cin>>n>>k;
    ll id[n];
    for(int i=0;i<n;i++)
    cin>>id[i];
    
    for(int i=0;i<n;i++)
    {
        if(k-i>0)
        k=k-i;
    }
    
    cout<<id[k-1];
    
    
}