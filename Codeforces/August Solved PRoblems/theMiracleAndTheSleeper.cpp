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
        ll l, r, a, b;
        cin>>l>>r;

        if(abs(l-r) <= 1)
        cout<<abs(l-r)<<endl;
        else
        {
            ll maxm = 0;
            for(int i=l;i<=r;i++)
            if(r%i >maxm)
            maxm = r%i;

            cout<<maxm<<endl;
        }

    }

    return 0;
}