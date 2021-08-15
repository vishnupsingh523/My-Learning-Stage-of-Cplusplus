#include<bits/stdc++.h>
using namespace std;

#define w(t) int t;cin>>t;while(t--)

int main()
{
    w(t)
    {
        long long n,k,p;
        cin>>n>>p>>k;

        long long days =0;
        long long total = (n/k)*k;
        long long rem = p%k;
        if(n>total)
        {
            days = (rem-1)*(n/k) + (n/k + 1) + (n-total)%rem;
            for(int i=rem;i<=p;i=i+k)
            days++;
        }
        else
        days = (p%k)*(n/k) + (p+k)/k;

        cout<<days<<"\n";
    }
}