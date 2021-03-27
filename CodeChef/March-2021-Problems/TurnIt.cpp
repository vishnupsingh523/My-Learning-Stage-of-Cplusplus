#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long n,x;

    while (t--)
    {
        long long u,v,a,s;
        cin>>u>>v>>a>>s;
        if(u==v)
        cout<<"YES\n";
        else
        {
            long double V = sqrt(pow(u,2)-2*a*s);
            if(V>v)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
    }
    
}