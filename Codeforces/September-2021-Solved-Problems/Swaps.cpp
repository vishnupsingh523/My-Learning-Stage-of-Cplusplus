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

#define fon(x,n) for(auto i=x;i<n;i++)
#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    w(t)
    {
        ll n;
        cin>>n;
        ll a[n], b[n];

        fon(0,n)
        {
            cin>>a[i];
        }
        fon(0,n)
        {
            cin>>b[i];
        }

        ll flag = 0;
        ll cnt =0;
        ll minm = LONG_LONG_MAX;

        unordered_map<ll, ll> index;

        if(a[0]<b[0])
        minm =0;
        else if(a[0] > b[0])
        {
            ll j =1;
            for(int i=0;i<n;i++)
            {
                while(j<b[i])
                {
                    index[j] = i;
                    j+=2;
                }
            }

            for(int i=0;i<n;i++)
            {
                minm = min(minm, i+index[a[i]]);
            }
        }

        cout<<minm<<endl;
    }
}