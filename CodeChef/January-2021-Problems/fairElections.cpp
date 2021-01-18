#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vl vector<long long>
#define ll long long
#define fl float
#define db double
#define st string

#define ll long long

int main() {
    int T;
    ll n,m;
    cin>>T;
    
    while(T--)
    {
        cin>>n>>m;
        vl a,b;
        ll john =0, jack =0;
        ll value=0;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            john += value;
            a.push_back(value);
        }
        for(int i=0;i<m;i++)
        {
            cin>>value;
            jack += value;
            b.push_back(value);
        }

        ll min,max;
        ll i=0;
        for(; john <= jack&& i<n+m; i++)
        {
            if(john<=jack)
            {
                min = *min_element(a.begin(),a.end());
                max = *max_element(b.begin(), b.end());
                john -= min;
                john += max;
                jack -= max;
                jack += min;
            }
        }
        if(john>jack)
        cout<<i<<endl;
        else
        {
            cout<<-1<<endl;
        }
        
    }
}