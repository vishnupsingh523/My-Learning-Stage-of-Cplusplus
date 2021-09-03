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
    
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        int d=0,e=0;

        cin>>a>>b>>c;
        if(a)
        d++;
        if(b)
        d++;
        if(c)
        d++;

        cin>>a>>b>>c;

        if(a)
        e++;
        if(b)
        e++;
        if(c)
        e++;

        if(d==e)
        cout<<"Pass\n";
        else
        cout<<"Fail\n";
    }
}