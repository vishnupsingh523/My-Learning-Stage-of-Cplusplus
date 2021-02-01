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

    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        bool check = false;
        if((x+y)==z)
        check = true;
        else if((x+z)==y)
        check = true;
        else if((y+z)==x)
        check = true;
        
        if(check == true)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    
    
}