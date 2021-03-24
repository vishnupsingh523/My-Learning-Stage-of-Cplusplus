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

    ll n;
    cin>>n;
    vi  x;
    ll value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        x.push_back(value);
    }

    ll q;
    cin>>q;

    sort(x.begin(), x.end());
    
    vi ::iterator itr;
    for(int i=0;i<q;i++)
    {
        cin>>value;
        itr = upper_bound(x.begin(),x.end(), value);

        cout<<( itr - x.begin() )<<"\n";
    }
}