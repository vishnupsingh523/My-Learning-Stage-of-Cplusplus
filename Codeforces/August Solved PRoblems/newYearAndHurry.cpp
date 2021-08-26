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
    int n, k;
    int sum =0;

    cin>>n>>k;

    int x = 240-k;
    int ans =0;
    for(int i=1;(i<=n)&&(sum+i*5 <=x); i++)
    {
        sum += i*5;
        ans++;
    }

    cout<<ans;

    return 0;
}