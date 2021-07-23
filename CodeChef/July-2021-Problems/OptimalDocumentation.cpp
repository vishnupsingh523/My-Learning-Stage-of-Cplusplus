#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    
    while(t--)
    {
        cin>>n;
        int arr[n];
        int sum =0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+= arr[i];
        }

        if(n==1)
        cout<<"1\n";
        else
        {
            int x;
            int suffixGCD[n];
            int prefixGCD[n];

            for(int i=1;i<=n;i++)
            suffixGCD[i]=0;
            for(int i=1;i<=n;i++)
            prefixGCD[i]=0;


            prefixGCD[0]=arr[0];
            suffixGCD[n-1]=arr[n-1];

            for(int i=1;i<n;i++)
            prefixGCD[i] = __gcd(arr[i],prefixGCD[i-1]);

            for(int i=n-2;i>=0;i--)
            suffixGCD[i] = __gcd(arr[i],suffixGCD[i+1]);

            int minm = INT_MAX;
            for(int i=0;i<n;i++)
            {
                int ans = ((sum-arr[i])/x) +1;
                if(i>0&&i<n-1)
                x = __gcd(prefixGCD[i-1], suffixGCD[i+1]);
                else if(i==0)
                x = suffixGCD[i+1];
                else if(i==n-1)
                x = prefixGCD[i-1];

                minm = min(minm, ans);
            }

            cout<<minm<<"\n";
        }
    }
}