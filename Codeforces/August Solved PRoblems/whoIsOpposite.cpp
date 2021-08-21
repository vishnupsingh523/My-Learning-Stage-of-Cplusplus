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
        ll a,b,c,n;
        cin>>a>>b>>c;
        n = (max(a,b) - min(a,b)) * 2;
        
        if(max(c,max(a,b))>n)
        cout<<-1<<endl;
        else if(c<=n/2)
        {
            cout<<(n/2 + c)<<endl;
        }
        else if(c>n/2 && c<=n)
        cout<<(c-n/2)<<endl;
        else
        cout<<-1<<endl;
    }

    return 0;
}