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

    int t;
    ll x;
    cin>>t;
    while(t--)
    {
        int odd = 0;
        int even =0;
        w(n){
            cin>>x;
            if(x%2==0)
            even++;
            else 
            odd++;
        }
        if(odd>=even)
        cout<<even<<"\n";
        else
        cout<<odd<<"\n";
    }
    
    
}