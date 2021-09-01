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
        ll n;
        cin>>n;
        ll a[n], b[n-1];

        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n-1;i++)
        cin>>b[i];

        sort(a, a+n);
        sort(b, b+n-1);

        // ll diff;

        // if(n==2)
        // {
        //     if(b[0]-a[1]>0)
        //     cout<<min(b[0]-a[0], b[0]-a[1])<<endl;
        //     else
        //     cout<<b[0]-a[0]<<endl;
        // }
        // else if(n==3)
        // {
        //     unordered_map<ll, ll> ump;
    
        //     ump[b[0]-a[0]]++;
        //     ump[b[0]-a[1]]++;
        //     ump[b[0]-a[2]]++;
        //     ump[b[1]-a[0]]++;
        //     ump[b[1]-a[1]]++;
        //     ump[b[1]-a[2]]++;

        //     ll value = ump.begin()->second;
        //     ll minm = ump.begin()->first;

        //     for(auto itr = ump.begin(); itr != ump.end(); itr++)
        //     {
        //         if(value < itr->second)
        //         {
        //             value = itr->second;
        //             minm = itr->first;
        //         }
            
        //     }
        //     cout<<minm<<endl;
        // }
        // else
        // {
            unordered_map<ll, ll> ump;
            for(int i=0;i<n;i++)
            ump[b[i]-a[i]]++;

            for(int i=1;i<n;i++)
            ump[b[i-1]-a[i]]++;

            ll value = ump.begin()->second;
            ll minm = ump.begin()->first;

            for(auto itr = ump.begin(); itr != ump.end(); itr++)
            {
                if(value < itr->second)
                {
                    value = itr->second;
                    minm = itr->first;
                }
            
            }
            cout<<minm<<endl;
        // }

    }
}