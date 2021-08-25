#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)

#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    sync

    w(t){
        int n;
        cin>>n;
        ll value;
        map<ll,ll> mp;

        f(n)
        {
            cin>>value;
            if(mp.find(value) != mp.end())
            mp[value]++;
            else
            {
                mp[value] = 0;
                mp[value]++;
            }
        }
        
        auto itr = mp.begin();
        for(;itr!=mp.end(); itr++)
        cout<<itr->first<<" "<<itr->second<<endl;
        cout<<endl;
    }
}