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

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    ll t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        string str;
        cin>>n>>a>>b;
        cin>>str;

        int count1=0,count0=0;

        for(int i=0;i<n;i++)
        if(str[i]=='1')
        count1++;
        else
        count0++;

        cout<<count1*b+count0*a<<endl;
    }
}