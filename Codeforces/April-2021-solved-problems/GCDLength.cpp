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

int findGCD(ll n)
{
    ll sum =0;
    for(ll k = n;k>0;k = k/10)
    sum+= k%10;

    return __gcd(n, sum);
}
int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ll t;
    cin>>t;
    
    ll n;
    int type=0;
    ll a,b,c;
    ll x, y, mingcd=0,GCD;
    ll mainX, mainY;

    while(t--)
    {
        cin>>a>>b>>c;
        ll power = pow(10,a+1) -1;
        ll powerB = pow(10,b+1) -1;
        ll powerC = pow(10,c+1)-1;

        for(int i=power/10;i<power;i++)
        {
            for(int j=powerB/10;j<powerB;j++)
            {
                GCD = __gcd(x,y);
                if(mingcd>GCD)
                mingcd = GCD,mainX=x,mainY=y;
            }
        }

        
        // if(mingcd >= (powerC/10) && mingcd <= powerC)
        // {
            cout<<mainX<<mainY<<"\n";
        // }
    }

}