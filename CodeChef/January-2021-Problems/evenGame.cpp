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
    ll n;
    cin>>t;
    while(t--)
    {
        ll sum = 0;
        ll x;
        cin>>n;
        while(n--){
            cin>>x;
            sum = sum + x;
        }
        if(sum%2==0)
        cout<<"1\n";
        else 
        cout<<"2\n";
        
    }
    
    
}