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

    if(k==0)
    {
        cout<<arr[0]-1;
        return 0;
    }
    ll x=arr[k-1];

    ll cnt=0;
    for(int i=0;i<n;i++)
    if(arr[i]<=x)
    cnt++;

    if(cnt==k||cnt<1)
    cout<<x;
    else
    cout<<-1;
}