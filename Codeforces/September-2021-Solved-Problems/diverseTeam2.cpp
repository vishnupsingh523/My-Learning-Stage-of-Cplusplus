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

#define fon(x,n) for(auto i=x;i<n;i++)
#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int n,k;
    cin>>n>>k;
    
    int arr[n];

    fon(0,n)
    cin>>arr[i];

    unordered_map<int,int> ans;
    fon(0,n)
    {
        if(ans.find(arr[i])==ans.end())
        ans[arr[i]]=i;
    }

    if(ans.size()<k)
    cout<<"NO\n";
    else
    {
        int cnt =0;
        cout<<"YES\n";
        for(auto it = ans.begin();it!=ans.end()&&cnt<k; it++)
        {
            cnt++;
            cout<<it->second+1<<" ";
        }
        cout<<endl;
    }
}