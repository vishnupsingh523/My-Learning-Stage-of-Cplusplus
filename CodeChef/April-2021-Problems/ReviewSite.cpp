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
    ll upvote=0, downvote=0;
    while(t--)
    {
        upvote =0, downvote=0;
        cin>>n;
        while(n--)
        {
            cin>>type;
            if(type==2)
            downvote++;
            else
            upvote++;
        }
        cout<<upvote<<"\n";
    }

}