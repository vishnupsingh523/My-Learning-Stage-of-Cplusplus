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

    ll n;
    w(t)
    {
        cin>>n;
        ll arr[n+1], count=0, sum=0, max = LONG_LONG_MIN;

        for(ll i=0;i<=n;i++)
        arr[i]=0;

        for(ll i=0;i<n;i++)
        {
            cin>>count;
            arr[count]++;
            if(max<arr[count])
            max = arr[count];
        }
        for(int i=0;i<=n;i++)
        sum+=arr[i];

        if(max >1)
        {
            sum = sum-max+1;
            max--;
        }
        else
        sum--;


        if( max == 1&&sum!=0)
        cout<<1<<"\n";
        else if(sum==0)
        cout<<0<<"\n";
        else if(max>sum)
        cout<<sum<<"\n";
        else
        cout<<max<<"\n";

        

    }
}