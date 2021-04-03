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

    string str;
    cin>>str;

    int arr[str.size()];
    arr[0] = 0;
    for(int i=1;i<str.size();i++)
    {
        arr[i] = 0;
        if(str[i-1] == str[i])
        arr[i] = arr[i-1]+ 1;
        else
        arr[i] = arr[i-1];
    }

    int m;
    cin>>m;
    
    int l, r;
    while(m--)
    {
        cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<"\n";
    }
}