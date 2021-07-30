#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long pain;
        int N;
        cin>>N>>pain;

        vector<long long> values(N,0);
        long long sum =0;
        int count =0;

        for(int i=0;i<N;i++)
        {
            cin>>values[i];
            sum += values[i];
        }

        sort(values.begin(), values.end());
        
        while(pain>0&&sum>0)
        {
            pain = pain - values[N-1];
            sum = sum - values[N-1]/2;
            values[N-1] = values[N-1]/2;
            sort(values.begin(), values.end());
            count++;
        }

        if(pain<=0)
        cout<<count<<"\n";
        else
        cout<<"Evacuate\n";
    }
}