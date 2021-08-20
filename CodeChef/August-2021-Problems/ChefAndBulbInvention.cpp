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
        long long rem = p%k;
        if(rem <= (n%k))
        {
            days = (rem)*(n/k + 1) + (p/k)*(n/k);
        }
        else
        days = (n%k)*(n/k +1) + (rem - (n%k))*(n/k) + (p/k)*(n/k);

        cout<<days<<"\n";
    }
}