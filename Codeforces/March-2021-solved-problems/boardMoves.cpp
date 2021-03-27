#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        long long ans = 0;
        long long n;
        cin>>n;

        for(int i=1;i<=n/2;i++)
        {
            ans+= i*1LL*i;
        }

        cout<<ans*8<<"\n";
    }
}