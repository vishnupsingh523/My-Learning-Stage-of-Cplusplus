#include<iostream>
using namespace std;

int main()
{
    int n, t, k, d;
    int cake1= 0, cake2=0;

    cin>>n>>t>>k>>d;

    if(n<=k)
    cout<<"NO\n";
    else{
        cake1 = (n/k)*t;
        if(n%k!=0)
        cake1+=t;

        if(d<=t)
        {
            cake2 = t;
            n = n-k;

            if( ((n/k)*t)%2==0 )
            cake2 = cake2 + ((n/k)*t + (n%k!=0)?t:0)/2;
        }
        else{
            cake2 = (d/t)*t + (d%t!=0)?t:0;
            n = n-(cake2/t)*k;

        }

        if(cake1 <= cake2)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}