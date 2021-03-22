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
    
    int n;
    cin>>n;
    
    if(n%4==0 || n%7==0 || n%44==0 ||n%47==0 || n%74==0 || n%77==0 ||n%444==0 || n%447==0 || n%477==0 || n%474==0 ||n%744==0 || n%777==0 || n%774==0 ||n%747==0)
    cout<<"YES";
    else
    cout<<"NO";
}