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
    
    int nZones,hNeed,xLeft;
    cin>>nZones>>hNeed>>xLeft;
    int t[nZones];

    bool check = false;
    while(nZones--)
    {
        cin>>t[nZones];
        if(t[nZones]+xLeft >= hNeed)
        check = true;
    }

    if(check)
    cout<<"YES";
    else
    cout<<"NO";
}