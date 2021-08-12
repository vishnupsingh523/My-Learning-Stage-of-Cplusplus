#include<bits/stdc++.h>
using namespace std;

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)
#define ll long long

int main()
{
    w(t)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll maxm = LONG_LONG_MIN;
        double sum=0;

        f(n)
        {
            cin>>arr[i];
            maxm = max(maxm, arr[i]);

            sum += arr[i];
        }

        sum = sum - maxm;
        sum = maxm + sum/(n-1);
        cout<<fixed<<setprecision(9)<<sum<<"\n";
    }
}
