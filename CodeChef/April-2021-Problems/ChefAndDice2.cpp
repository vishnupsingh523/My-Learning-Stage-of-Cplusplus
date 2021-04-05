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

    ll t;
    cin>>t;
    const int arr[4] = {60, 20, 36, 51};
    ll n;
    while(t--)
    {
        cin>>n;
        ll div=n/4, mod=n%4;
        ll value =0;
        if(n>4&&mod==0)
        value = 60*div - ( 6*(div-1) + 6*mod );
        else if(n>4&&mod != 0)
        value = 60*div + arr[mod] - ( 6*(div-1) + 6*mod );
        else
        value = arr[mod];

        cout<<value<<"\n";
    }
}