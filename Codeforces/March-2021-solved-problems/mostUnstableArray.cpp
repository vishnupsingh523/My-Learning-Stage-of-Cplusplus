#include<bits/stdc++.h>

using namespace std;

int main(){
    long long ans = 0;
    long long n,m;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        if(n==1)
        cout<<0<<"\n";
        else if(n==2)
        cout<<m<<"\n";
        else
        cout<<2*m<<"\n";
    }
}