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

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                maxValue = (i*(j)) - k*(arr[i]|arr[j]);
                if(maxm<maxValue)
                maxm = maxValue;
            }
        }
        cout<<maxm<<"\n";
    }
}