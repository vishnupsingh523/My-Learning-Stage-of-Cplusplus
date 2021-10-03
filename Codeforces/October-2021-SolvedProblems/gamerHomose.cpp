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
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n, h;
        cin>>n>>h;
        ll arr[n];

        for(int i=0;i<n;i++)
        cin>>arr[i];

        sort(arr, arr+n);

        ll ans =0;
        while(h)
        {
            if(h)
            {
                ans++;
                h = h-arr[n-1];
                if(h<0)
                h=0;
            }
            if(h)
            {
                ans++;
                h=h-arr[n-2];
                if(h<0)
                h=0;
            }        
        }
        cout<<ans<<endl;
    }
}