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

ll log(int base, ll x)
{
    return (ll)(log(x)/log(base));
}

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    w(t)
    {
        int n;
        cin>>n;
        string str;

        cin>>str;

        ll ans =0;
        ll count =0, sum =0;

        for(int i=0;i<n;i++)
        {
            if(str[i]>'0')
            count++;
            sum += str[i]-'0';
        }

        if(str[n-1]=='0')
        ans = sum+count;
        else
        ans = sum+count-1;

        cout<<ans<<endl;
    }
}