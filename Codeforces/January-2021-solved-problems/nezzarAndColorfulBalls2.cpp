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
    int n;
    cin>>n;
    int max = 0;
    int arr[n+1]={0};
    
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        arr[x]++;
    }

    for(int i=1;i<=n;i++)
    max = (max>arr[i])?max:arr[i];

    // if(n>1)
    cout<<max<<"\n";
    // else
    // cout<<1<<"\n";
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