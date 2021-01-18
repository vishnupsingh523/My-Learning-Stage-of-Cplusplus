#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define ll long long
#define fl float
#define db double
#define st string

#define ll long long
int main() {

    int t;
    ll x,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll value = 0;
        vector<ll> a;
        

        for(ll i=0;i<n;i++)
        {
            cin>>value;
            
            a.push_back(value);
        }
        
        
        ll sum = 0;

        for(ll i=0;(i< a.size())&& a[i]%x==0; i++)
        {
            if(a[i]%x == 0)
            {
                value = a[i]/x;
                for(int i=0;i<x;i++)
                a.push_back(value);
            }
        }

        sum=0;
        for(ll i =0;i<a.size(); i++)
        sum+=a[i];
        cout<<sum<<endl;
    }
}