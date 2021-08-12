#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)

int main()
{
    w(t)
    {
        int n;
        cin>>n;
        int ans =0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            for(int k=1;k<n;k++)
            {

                /*
                AmodB=C 
                BmodC=0
                1≤A,B,C≤N
                */
                if(i%j==k && j%k==0)
                ans++;
            }
        }

        cout<<ans<<"\n";
    }
}