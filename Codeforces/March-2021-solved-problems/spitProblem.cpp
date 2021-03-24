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
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int n;
    cin>>n;
    
    map<int, ll> xd;

    int x;
    ll d;
    for(int i=0;i<n;i++)
    {
        cin>>x>>d;
        xd.insert(make_pair(x,d));
    }

    map<int,ll>::iterator it = xd.begin();
    int prev = 0;
    int curr = 0;
    int count =0;
    
    for(;it!=xd.end();it++)
    {
        int find= it->first + it->second;
        prev = it->first;

        for( map<int,ll>::iterator next = xd.begin();next!=xd.end();it++)
        {
            if(it != next)
            {
                curr = next->first;
                int cf = next->first + next->second;
                if(curr == find && cf == prev)
                {
                    count++;
                    cout<<"YES";
                    return 0;
                }
            }
        }
        
    }

    cout<<"NO";

}