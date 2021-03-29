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

int findGCD(ll n)
{
    ll sum =0;
    for(ll k = n;k>0;k = k/10)
    sum+= k%10;

    return __gcd(n, sum);
}
int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;
    ll n,W;
    ll x, sum =0;
    cin>>t;
    while (t--)
    {
        cin>>n>>W;
        sum = 0;
        for(ll i =0;i<n;i++)
        {
            cin>>x;
            sum += x;
        }
        
        if(sum%W==0)
        cout<<sum/W<<"\n";
        else
        cout<<sum/W+1<<"\n";
    }
    
}