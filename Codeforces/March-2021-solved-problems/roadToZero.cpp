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
        
        long long cost1=LONG_LONG_MAX, cost2=LONG_LONG_MAX,cost3=LONG_LONG_MAX,cost4=LONG_LONG_MAX;
        
        if(x>=0&&y>=0)
        cost1 = (x>y)? (x-y)*a+y*b : (y-x)*a+x*b;
        if(x<=0&&y<=0)
        cost2 = (x>y)?(x-y)*a + (-x)*b: (y-x)*a+(-y)*b;

        if(x<=0&&y>=0)
        cost3 = (y-x)*a;

        if(x>=0 && y<=0)
        cost4 = (x-y)*a;
        
        if(cost1<=cost2&&cost1<=cost3&&cost1<=cost4)
        cout<<cost1<<"\n";
        else 
        if(cost2<=cost1&&cost2<=cost3&&cost2<=cost4)
        cout<<cost2<<"\n";
        else 
        if(cost3<=cost2&&cost1>=cost3&&cost3<=cost4)
        cout<<cost3<<"\n";
        else
        cout<<cost4<<"\n";
    }
}