#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)
#define endl "\n"

#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    sync

    w(t)
    {
        int a, a1, a2, b, b2, b1;

        cin>>a>>b>>a1>>b1>>a2>>b2;

        if( (a==a1&& b==b1) || (a==b1&&b==a1)) 
        cout<<1<<endl;  
        else if((a==a2&& b==b2) || (a==b2&&b==a2))
        cout<<2<<endl;
        else
        cout<<0<<endl;
    }
}