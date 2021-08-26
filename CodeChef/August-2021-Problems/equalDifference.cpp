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

    w(t){
        int n;
        cin>>n;
        ll value;
        unordered_map<ll, ll> mp;
        ll maxm = 0;

            f(n)
            {
                cin>>value;
                mp[value]++;

                if(mp[value] > maxm)
                maxm = mp[value];
            }
            
        if(n<=2)
        cout<<0<<endl;
        else{
            cout<<n-maxm<<endl;
        }
    }
}