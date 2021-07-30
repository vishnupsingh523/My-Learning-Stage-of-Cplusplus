#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        long long maxValue = 0;  
        long long maxm = LONG_LONG_MIN;

        for(int i=1;i<n;i++)
        {
            maxValue = (i*(i+1)) - k*(arr[i-1]|arr[i]);
            if(maxm<maxValue)
            maxm = maxValue;
        }
        cout<<maxm<<"\n";
    }
}