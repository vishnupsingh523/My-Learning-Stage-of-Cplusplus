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

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ll n;
    cin>>n;
    ll arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(j%2==0&&j>0)
            {
                if(arr[j]>arr[j-1])
                swap(arr[j], arr[j-1]);
            }
            else if(j>0)
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
        }
    }
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
}