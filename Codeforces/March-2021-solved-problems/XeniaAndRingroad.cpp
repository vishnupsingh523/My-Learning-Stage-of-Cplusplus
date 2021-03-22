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
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ll n,m;
    cin>>n>>m;
    ll a[m];
    for(ll i=0;i<m;i++)
    cin>>a[i];

    ll time =0;
    ll pos =1, reach;

    for(int i =0 ;i<m;i++)
    {
        reach = a[i];
        
        if(pos <= reach)
        time += (reach-pos);
        else
        time = time + (n-pos)+reach;

        pos = reach;
    }
    cout<<time;
}