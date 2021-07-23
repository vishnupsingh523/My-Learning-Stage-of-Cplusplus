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
    
    ll n,k;

    while(t--)
    {
        cin>>n>>k;
        int arr[n];

        for(int i=0;i<n;i++)
        cin>>arr[i];

        long mask = 1, ans =0;

        for(int i=0;i<31;i++)
        {
            mask = (1<<i);
            int count =0;
            for(int j=0;j<n;j++)
            if(arr[j]&mask)
            count++;

            if(count%k==0)
            ans+= count/k;
            else
            ans += count/k +1;
        }         
        cout<<ans<<"\n";
    }

}