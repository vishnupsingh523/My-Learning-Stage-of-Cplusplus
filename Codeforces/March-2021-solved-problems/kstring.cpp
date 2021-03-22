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
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        ll n, k;
        cin>>n>>k;

        st s;
        cin>>s;

        ll goodScore=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i] != s[n-i-1])
            goodScore++;
        }

        if(goodScore >= k)
        cout<<"Case #"<<j<<": "<<0<<"\n";
        else
        cout<<"Case #"<<j<<": "<<k-goodScore<<"\n";
    }
}