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
    int T;
    int n;
    ll k,d;
    cin>>T;
    
    while(T--)
    {
        cin>>n>>k>>d;
        ll a[n];
        ll sum =0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        ll div = sum/k;
        if(div>=d)
        cout<<d<<"\n";
        else
        {
            cout<<div<<"\n";
        }
        
        
    }
}