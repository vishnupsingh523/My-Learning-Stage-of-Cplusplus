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
        ll arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int b;
        cin>>b;

        int brr[b];
        arrFill(brr, b);

        for(ll i =0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            for(ll k = j+1;k<n;k++)
            brr[(arr[i]+arr[j]+arr[k])%b]++;
        }

        for(int i=0;i<b;i++)
        cout<<brr[i]<<" ";
        cout<<endl;
    }
}