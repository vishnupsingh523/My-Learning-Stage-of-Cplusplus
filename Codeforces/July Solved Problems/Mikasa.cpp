#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long arr;
        unordered_map<long long,int> ump;
        for(long long i=0;i<=m;i++)
        {
            long long val = (arr^i);
            ump[val]++;
        }
        
        for(int i=0;i<=m;i++)
        if(ump.find(i) == ump.end())
        {
            cout<<i<<"\n";
            break;
        }        
    }
}