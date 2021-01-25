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
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
void solve()
{
    ll d;
    cin>>d;
    
    ll cnt1 = 1+d;
    ll cnt2 = cnt1 + d;
    ll cnt3 = cnt2 + d;

    while(((cnt3)%cnt2!= 0)||((cnt3)%cnt1!= 0))
    {
        cnt3 += d;
    }
    cout<<cnt3<<"\n";
}
 
 
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
    sync
    
    int t;
    cin>>t;
    while(t--)
    { 
        solve();
    }
 
}