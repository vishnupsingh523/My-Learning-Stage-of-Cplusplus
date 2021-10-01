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
        ll a[3], d;
        cin>>a[0]>>a[1]>>a[2]>>d;
        sort(a, a+3);

        int rem = d;
        int ans =0;
        
        rem = rem-a[2];
        ans++;
        if(rem>=a[1])
        {
            rem = rem-a[1];
        }
        else 
        {
            ans++;
            rem = d-a[1];
        }

        if(rem<a[0])
        ans++;

        cout<<ans<<endl;
    }
}