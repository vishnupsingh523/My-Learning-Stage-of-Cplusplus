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


int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int a, b;
    cin>>a>>b;
    int candles=0;

    for(;a!=0;)
    {
        if(a>=b)
        {
            candles+= b;
            a = a-b;
            a = a+1;
        }
        else
        a--,candles++;
    }

    cout<<candles;
}