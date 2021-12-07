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

    int t;
    cin>>t;
    while(t--)
    {
        char a,b,c;
        char d, e;
        cin>>a>>b>>c;
        cin>>d>>e;
        if(a==d)
        cout<<d<<endl;
        else if(a==e)
        cout<<e<<endl;
        else if(b==d)
        cout<<d<<endl;
        else if(b==e)
        cout<<e<<endl;
        else if(c==d)
        cout<<d<<endl;
        else if(c==e)
        cout<<e<<endl;
    }
    
}