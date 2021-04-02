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

int findGCD(ll n)
{
    ll sum =0;
    for(ll k = n;k>0;k = k/10)
    sum+= k%10;

    return __gcd(n, sum);
}
int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;

    ll N, K;
    while(t--)
    {
        cin>>N>>K;
        string str;

        cin>>str;

        ll strong =0;
        ll maxi = LONG_LONG_MIN;
        
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='*')
            strong++;
            else{
                if(strong >= maxi)
                maxi = strong;

                strong =0;
                // break;
            }
        }
        
        if(strong >= maxi)
        maxi = strong;
        
        if(maxi >= K)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}