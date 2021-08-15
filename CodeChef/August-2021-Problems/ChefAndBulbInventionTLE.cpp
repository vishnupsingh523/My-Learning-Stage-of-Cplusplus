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

        for( i=0;i<k;i++)
        {
            for( j=i;j<n;j=j+k)
            if(j==p)
            {
                days++;
                break;
            }else days++;

            if(j==p)
            break;
        }

        cout<<days<<"\n";
    }
}