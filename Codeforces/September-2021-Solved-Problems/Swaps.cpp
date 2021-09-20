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

#define fon(x,n) for(auto i=x;i<n;i++)
#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    w(t)
    {
        ll n;
        cin>>n;
        ll a[n], b[n];
        unordered_map<ll,ll> ump1, ump2;

        fon(0,n)
        {
            cin>>a[i];
            ump1[a[i]]=i;
        }
        fon(0,n)
        {
            cin>>b[i];
            ump2[b[i]] = i;
        }

        ll flag = 0;
        ll cnt =0;
        ll maxm;

        if(a[0]<b[0])
        break;
        else if(a[0] > b[0])
        {
            cnt = ump1[b[0]-1];
            flag = 0;
            break;
        }

        maxm = abs(cnt-flag);

        cnt =0, flag=0;
        if(a[0]<b[0])
        break;
        else if(a[0] > b[0])
        {
            cnt = ump2[a[0]+1];
            flag = 0;
            break;
        }
        
        maxm = min(abs(cnt-flag), maxm);
        cout<<maxm<<endl;
    }
}