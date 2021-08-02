#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long P, a, b;
        
        cin>>P;
        for(int i=2;i<=10;i++)
        {
            for(int j=i+1;j<=10;j++)
            if(P%i==P%j)
            {
                a = i;
                b = j;
                break;
            }
        }
        
        cout<<a<<" "<<b<<"\n";
    }
}