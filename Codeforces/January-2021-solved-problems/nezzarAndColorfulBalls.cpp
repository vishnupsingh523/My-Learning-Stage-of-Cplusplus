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


void solve(){
    int n;
    cin>>n;
    int max = INT_MIN;
    int a,b;
    int count=1;
    
    cin>>b;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        if(b==a)
        count++;
        else{
            if(count>max)
            max = count;
            count =1;
        }
    }

    if(count>max)
    max = count;

    // if(n>1)
    cout<<max<<"\n";
    // else
    // cout<<1<<"\n";
}
int main() {
    sync
    
    int t,n;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}