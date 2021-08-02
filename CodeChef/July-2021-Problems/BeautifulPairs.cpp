#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long N;
        cin>>N;
        double arr[N];
        long long ans =0;
        for(long long i=0;i<N;i++)
        cin>>arr[i];

        unordered_map<long long,long long>ump;

        for(long long i=0;i<N;i++)
        {
            ump[arr[i]]++;
        }

        for(auto itr : ump)
        if(itr.second >=1)
        ans= ans+ (N-itr.second)*itr.second;
        cout<<ans<<"\n";
    }
}