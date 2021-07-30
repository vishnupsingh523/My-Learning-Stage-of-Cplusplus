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

        priority_queue<long long> values;
        int count =0;
        long long num;
        for(int i=0;i<N;i++)
        {
            cin>>num;
            values.push(num);
        }
        
        while(pain>0&& !values.empty())
        {
            num = values.top();
            pain = pain - num;
            num = num/2;
            values.pop();
            if(num>0)
            values.push(num);
            count++;
        }

        if(pain<=0)
        cout<<count<<"\n";
        else
        cout<<"Evacuate\n";
    }
}