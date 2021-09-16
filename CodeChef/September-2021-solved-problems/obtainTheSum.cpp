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

ll obtainSum(ll n, ll s)
{
    ll sum =0;
    bool check =true;
    ll i;
    for(i=1;i<=n&&check==true;i++)
    {
        if(n==i)
        sum = (n*(n-1))/2;
        else
        sum = (i*(i-1))/2 + ( (n*(n+1))/2 - (i*(i+1))/2);
        
        if(sum == s)
        {
            check = false;
            break;
        }
    }

    if(check==true)
    return -1;
    else
    return i;
}
int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t;
    cin>>t;

    while(t--)
    {
        ll n,s;
        cin>>n>>s;

        cout<<obtainSum(n,s)<<endl;
    }
}