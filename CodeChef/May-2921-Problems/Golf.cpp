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

#define w(t) int t;cin>>t;while(t--)
 
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

    ll n,x,k;
    int check =0;
    w(t)
    {
        check =0;
        cin>>n>>x>>k;
        if(x%k==0)
        check++;
        else if((n+1-x)%k==0)
        check++;
        
        if(check>=1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}