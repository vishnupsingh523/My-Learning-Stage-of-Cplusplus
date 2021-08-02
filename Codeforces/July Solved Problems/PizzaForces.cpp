#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long dost;
        cin>>dost;
        
        if(dost<=6)
        cout<<15<<"\n";
        else{
            dost = (dost+1)/2;
            cout<<dost * 5<<"\n";
        }
    }
}