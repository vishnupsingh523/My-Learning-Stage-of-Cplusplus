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
        int a,b,c;
        cin>>a>>b>>c;

        if(a<b&&a<c)
        cout<<"Draw\n";
        else if(b<a&&b<c)
        cout<<"Bob\n";
        else
        cout<<"Alice\n";
    }
}