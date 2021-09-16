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
    
    w(t)
    {
        ll n;
        cin>>n;
        int a[n],b[n];

        fon(0,n)
        cin>>a[i];
        fon(0,n)
        cin>>b[i];

        vector<int> ans;
        fon(0,n)
        {
            int value = a[i]-b[i];
            ans.push_back(value);
        }

        sort(ans.begin(), ans.end());
        
        ll sum =0;
        bool check = false;

        fon(0,n)
        if(ans[i]>=0)
        {
            check = true;
            sum+= ans[i];
        }
        
        if(check)
        cout<<sum<<endl;
        else
        cout<<ans[n-1]<<endl;
    }
}