#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    int n;
    cin>>n;
    char y;
    int x =0, z =1;
    int last =0;

    for(int i=0;i<n;i++)
    {
        cin>>y;
        x = y-48;
        z=1;
        if(x+z == last)
        z--;
        cout<<z;
        last = x+z;
    }
    cout<<"\n";
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}