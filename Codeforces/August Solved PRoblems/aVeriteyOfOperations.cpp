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
        ll c,d;
        cin>>c>>d;

        if(c==d && d==0)
        cout<<0<<endl;
        else if(c==d && d!=0)
        cout<<1<<endl;
        else if((c+d)%2==1)
        cout<<-1<<endl;
        else
        cout<<2<<endl;
    }

    return 0;
}