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

ll log(int base, ll x)
{
    return (ll)(log(x)/log(base));
}

ll log3(ll value)
{
    ll cnt =0;
    while(value%3==0)
    {
        value = value/3;
        cnt++;
    }
    return cnt;
}

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ll n;
    cin>>n;
    
    vector<pair<ll,ll>>arr;
    
    ll value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        ll cnt = log3(value);
        arr.push_back({cnt,value});
    }

    for(int i=0;i<n;i++)
    cout<<arr[i].first<<" "<<arr[i].second<<endl;  

    sort(arr.begin(),arr.end());  
    cout<<endl<<"AfterSorting:\n";
    for(int i=0;i<n;i++)
    cout<<arr[i].first<<" "<<arr[i].second<<endl;  
}