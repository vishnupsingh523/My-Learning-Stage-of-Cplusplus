#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vll vector<long long>
#define ll long long
#define fl float
#define db double
#define st string

#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool checkZero(ll p)
{
    while(p)
    {
        if(p%10==0)
        return false;
        p = p/10;
    }
    return true;
}
int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b,c;
        ll x,y,z;
        cin>>a>>b>>c;
        cin>>x>>y>>z;
        double ax = (double)x/a;
        double by = (double)y/b;
        double cz = (double)z/c;
        
        int time = 240;
        ll points = 0;
        if(ax>by&&ax>=cz)
        {
            if(a*20<=240)
            {
                points = x*20;
                time = time-a*20;
            }

            if(by>cz)
            {
                if(b*20<=time)
                {
                    points += y*20;
                    time = time - b*20;

                    if(c*20<=time)
                    {
                        points += z*20;
                        time = time - c*20;
                    }
                    else
                    {
                        points += (time/c)*z;
                        time =0;
                    }
                }
                else
                {
                    points += (time/b)*y;
                    time =0;
                }
            }
            else{
                if(c*20<=time)
                {
                    points += z*20;
                    time = time - c*20;
                    
                    if(b*20<=time)
                    {
                        points += y*20;
                        time = time - b*20;
                    
                    }
                    else
                    {
                        points += (time/b)*y;
                        time =0;
                    }
                }
                else
                {
                    points += (time/c)*z;
                    time =0;
                }
            }
        }
        else if(ax > by &&cz>ax)
        {}

    }
}