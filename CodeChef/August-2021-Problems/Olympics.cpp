#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int g1,g2,s1,s2,b1,b2;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;

        int medal1 = g1+s1+b1;
        int medal2 = g2+s2+b2;
        
        if(medal1>medal2)
        cout<<"1\n";
        else
        cout<<"2\n";
    }
}