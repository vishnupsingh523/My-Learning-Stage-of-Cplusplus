#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)
#define endl "\n"

#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    sync

    w(t)
    {
        ll n, k, sum =0;

        cin>>n>>k;
        
        ll arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=0)
            sum+= arr[i];
        }

        sort(arr, arr + n);

        if(arr[k-1]>0)
        {
            k--;
            for(int i=k-1;i>=0;i--)
            if(arr[i]>=0)
            k--;
        }

        for(int i=0;i<k;i++)
        sum = sum + (-1)*arr[i];

        cout<<sum<<endl;
    }
}