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

    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int ans[k];
    int cnt=1;
    ans[0]=0;
    for(int i=1;i<n&&(cnt<=k);i++)
    {
        bool check = true;

        for(int j=0;j<cnt;j++)
        if(arr[i]==arr[ans[j]])
        {
            check = false;
            break;
        }

        if(check)
        {
            ans[cnt]=i;
            cnt++;
        }
    }

    if(cnt==k)
    {
        cout<<"YES\n";
        for(int i:ans)
        cout<<i+1<<" ";
    }
    else
    cout<<"NO";
}