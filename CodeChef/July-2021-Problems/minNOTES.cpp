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
    
    ll n;

    while(t--)
    {
        cin>>n;
        int arr[n];
        int gcd;
        long notes =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i==1)
            gcd = __gcd(arr[i],arr[i-1]);
            else if(i>1)
            gcd = __gcd(gcd,arr[i]);
        }
    
        for(int i=0;i<n;i++)
        notes += arr[i]/gcd;
        cout<<notes<<"\n";
    }

}