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

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll prize;
    int n;
    cin>>n;
    cin>>prize;
    ll total = 0, trv, acc;

    for(int i=0;i<n;i++)
    {
        cin>>trv>>acc;
        total += trv+acc;
    }

    if(prize>total)
    {
        prize = prize - total;
        cout<<round(prize/n);
    }
    else
    cout<<0;
}