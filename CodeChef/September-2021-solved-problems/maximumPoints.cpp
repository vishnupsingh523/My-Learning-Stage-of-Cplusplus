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
        vector<pair<double,ll>> values;

        values.push_back({(double)x/a,a});
        values.push_back({(double)y/b,b});
        values.push_back({(double)z/c,c});
        
        sort(values.begin(), values.end());
        int time = 240;
        ll points = 0;
        
        auto itr = values.begin();
        for(;itr!=values.end();itr++)
        if(itr->second*20<=time)
        {
            points+= (itr->first*itr->second*20);
            time = time-(itr->second*20);
        }
        else{
            points+=(time/itr->second)*(itr->first*itr->second);
            time = 0;
        }

        cout<<points<<endl;
    }
}