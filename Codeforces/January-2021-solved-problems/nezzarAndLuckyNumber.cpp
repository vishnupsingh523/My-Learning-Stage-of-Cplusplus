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


void solve(){
    ll n,d;
    cin>>n>>d;
    
    ll a=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        while(a%d!=0&&(a%10 != d)&&a>=d)
            a = a-d;
        if(a%d==0||a%10==d)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

}
int main() {
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    sync
    
    int t,n;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}