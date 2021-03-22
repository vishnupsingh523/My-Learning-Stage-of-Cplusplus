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
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t;
    ll c;
    cin>>t;

    while(t--)
    {
        cin>>c;
        ll i = 0;
        ll temp = c;

        while(temp>0)
        {
            temp= temp/2;
            i++;
        }
        
        ll A = pow(2, i-1) -1;
        ll B = A^c;
        cout<<A*B<<"\n";
    }
}