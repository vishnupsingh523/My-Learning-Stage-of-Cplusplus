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

void arrFill(int * arr, int n)
{
    for(int i=0;i<n;i++)
    arr[i] =0;
}
int main() {
    sync
    
    w(t)
    {
        ll n;
        cin>>n;
        
        int rem = n%4;
        if(rem>=2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}