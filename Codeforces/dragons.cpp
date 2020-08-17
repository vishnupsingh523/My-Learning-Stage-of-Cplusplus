#include<bits/stdc++.h>

 using namespace std;

#define ll long long

int main()
{
// here s  = strength of the soilder and n = number of dragons
    ll s,n;
    cin>>s>>n;
    // here x is the strength of dragon and y is the bonus
    ll x,y;
    multimap<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        mp.insert(make_pair(x,y));
    }

    ll count =0;
    for(map<ll,ll>::iterator itr = mp.begin();itr!=mp.end();itr++)
    {   
        if(s>itr->first)
        {
            s+= itr->second;
            count++;
        }
        else
        {
            count=0;
        }
        
    }
    if(count==0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
