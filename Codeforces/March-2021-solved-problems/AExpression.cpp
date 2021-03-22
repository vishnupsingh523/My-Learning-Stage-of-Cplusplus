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
    
    int a,b,c;
    cin>>a>>b>>c;

    int m1 = (a+b+c);
    int m2 = a*(b+c);
    int m3 = (a+b)*c;
    int m4 = a*b*c;

    cout<<max(max(m1,m2), max(m3,m4));
}