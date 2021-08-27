#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,z;
        cin>>x>>y>>z;

        cout<<max(z-y,z-x)<<"\n";
    }
    return 0;
}