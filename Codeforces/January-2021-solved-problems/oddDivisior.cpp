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
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync
    
    ll t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        
        while(!(n%2))
            n/=2;

        if(n>1)
        cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    
}