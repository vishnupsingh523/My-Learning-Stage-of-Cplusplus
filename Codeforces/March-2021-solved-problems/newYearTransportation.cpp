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
    
    ll n,t;
    cin>>n>>t;

    int arr[n];
    for(int i=0;i<n-1;i++)
    cin>>arr[i];

    int i=0;
    ll cell =1;
    for( i=0;i<n-1 && (t != cell);)
    {
        cell = 1 + i + arr[i];
        i += arr[i];
    }

    if(t == cell)
    cout<<"YES";
    else
    cout<<"NO";
    }