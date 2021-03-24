#include<bits/stdc++.h>

using namespace std;

int main(){
    long long x,y,a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cin>>a>>b;
        
        long long cost1, cost2, cost3, c=x,d=y;
        
        //checking for cost 1
        if(c>d)
        {
            cost1 = (c-d)*a;
            c = d;
        }
        
        if(c<d){
            cost1 = (d-c)*a;
            d = c;
        }

        if(c == d){
            cost1 += c*b;
        }

        // cost 2;
        cost2 = (abs(x)+abs(y))*a;
        // cost2 = (abs(x)+abs(y))*a;
        if(cost1>cost2)
        cout<<cost2<<"\n";
        else
        cout<<cost1<<"\n";
    }
}