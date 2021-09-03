#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vll vector<long long>
#define ll long long
#define fl float
#define db double
#define st string

#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x;
        cin>>n>>x;
        ll arr[n];

        for(int i=0;i<n;i++)
        cin>>arr[i];

        ll maxEqual =1, minOperation = LONG_LONG_MAX;

        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                unordered_map<ll,ll> ump;
                ll count =0;
                for(int k=0;k<i;k++)
                ump[arr[k]]++;
                for(int k=i;i<=j;k++)
                {
                    ump[arr[k]^k]++;
                    count =k;
                }
                for(int k=j+1;k<n;k++)
                ump[arr[k]]++;

                for(auto it : ump)
                if(maxEqual<it.second)
                {
                    maxEqual = it.second;
                    minOperation = ++count;
                }
            }
        }
        cout<<maxEqual<<minOperation<<endl;
    }
}