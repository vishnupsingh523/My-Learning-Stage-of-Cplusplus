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

bool checkZero(ll p)
{
    while(p)
    {
        if(p%10==0)
        return false;
        p = p/10;
    }
    return true;
}
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
        int n;
        cin>>n;
        ll p = pow(10,n-1);
        ll power = pow(10,n);
        p = p/3 +1;
        p = p*3;
        for(;p<power;p+=3)
        {
            if(p%3 ==0 && p%9!=0&& p%2==1)
            break;
        }
        cout<<p<<endl;
    }
}