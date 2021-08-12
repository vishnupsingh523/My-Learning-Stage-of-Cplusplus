#include<bits/stdc++.h>
using namespace std;

#define w(t) int t;cin>>t;while(t--)

int main()
{
    w(t)
    {
        long long n,k,p;
        cin>>n>>p>>k;

        long long days =0, i,j;

        // for( i=0;i<=p%k;i++)
        // {
            
        //     days = (p%k)*(n/k) + (p/k)+1;
        // }
        for(i=0;i<=p%k;i++)
        days = days + (n/(k+i));


        cout<<days<<"\n";
    }
}