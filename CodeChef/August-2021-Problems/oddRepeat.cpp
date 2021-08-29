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
        ll n, s, k, sum;
        cin>>n>>k>>s;

        sum = n*n;
        int odd =1;
        for(int i=1;i<=n;i++)
        {
            if( (sum + (k-1)*odd ) == s )
            {
                break;
            }
            odd = odd +2;
        }
        cout<<odd<<endl;
    }
}