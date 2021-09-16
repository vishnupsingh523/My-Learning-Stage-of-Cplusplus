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

#define fon(x,n) for(auto i=x;i<n;i++)
#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int t;
    int x;
    cin>>t;

    while(t--)
    {
        cin>>x;
        
        if(x%4 == 3)
        cout<<"West"<<endl;
        else if(x%4 == 0)
        cout<<"North\n";
        else if(x%4 == 1)
        cout<<"East\n";
        else
        cout<<"South\n";
    }
}