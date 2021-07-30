#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int size;
        cin>>size;
        long long arr[size];
        for(int i=0;i<size;i++)
        cin>>arr[i];

        long long maxValue = 1;  
        long long maxm = LONG_LONG_MIN;
        for(int i=0;i<size-1;i++)
        {
            maxValue = min(arr[i], arr[i+1])*max(arr[i],arr[i+1]);
            if(maxm<maxValue)
            maxm = maxValue;
        }
        cout<<maxm<<"\n";
    }
}