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

// ll permute(ll * a, int l, int r)
// {
//     if (a[l]>=a[r] || a[r]>=a[l])
//         return ::count++;
//     else
//     {
//         // Permutations made
//         for (int i = l; i <= r; i++)
//         {
 
//             // Swapping done
//             swap(a[l], a[i]);
 
//             // Recursion called
//             permute(a, l+1, r);
 
//             //backtrack
//             swap(a[l], a[i]);
//         }
//     }
// }

int doit(int n, int i)
{
    ll m=n;
    ll l = i;

    for(ll j=m%10;m>0; m/=10,j = m%10)
    for(ll k = l%10;l>0;l/=10, k=k%10)
    if(j==k)
    return i;
}
int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ll n;
    cin>>n;
    
    ll  check =0;
    for(int i=1;i<n/2;i++)
    if(n%i==0)
    check = doit(n,i);
    
    cout<<check;
}