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

ll log(int base, ll x)
{
    return (ll)(log(x)/log(base));
}

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int n,k;
    cin>>n>>k;

    int arr[101];
    for(int i=0;i<101;i++)
    arr[i]=-1;

    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        if(arr[value]==-1)
            arr[value]=i+1;
    }

    int cnt=0;
    vi ans;
    for(int i=1;i<=100&&cnt<=k;i++)
    {
        if(arr[i]!=-1)
        {
            ans.push_back(arr[i]);
            cnt++;
        }
    }

    sort(ans.begin(), ans.end());
    if(cnt==k)
    {
        cout<<"YES\n";
        for(int i:ans)
        cout<<i<<" ";
    }
    else
    cout<<"NO";
}