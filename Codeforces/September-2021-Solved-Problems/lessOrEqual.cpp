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
    
    ll n,k;
    cin>>n>>k;
    
    ll arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    sort(arr, arr+n);

    // ll x = arr[k-1];
    // bool check = false;
    ll x =0;
    if(k==0)
    {
        x = arr[0]-1;
    }
    else
    x=arr[k-1];

    ll cnt=0;
    for(int i=0;i<n;i++)
    if(arr[i]<=x)
    cnt++;

    if(!(x>=1&&x<=1000*1000*1000) || cnt!=k)
    cout<<-1;
    else
    cout<<x;
}