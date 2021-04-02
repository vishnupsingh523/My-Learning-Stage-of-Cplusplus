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
    cin>>t;

    float k1, k2, k3, v;
    float speed;
    while(t--)
    {
        speed = 0;
        cin>>k1>>k2>>k3>>v;
        speed = k1*k2*k3*v;
        speed = 100/speed;
        speed  = floor(speed*100 + .5)/100;
        
        if(speed<=9.57)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}