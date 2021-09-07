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


void pre(ll arr[])
{
    iota(arr[0], 1000000, 0);

    for(int i=2;1000000;i++)
    arr[i] = (arr[i]^arr[i-1]);
}
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
        int mex, Xor;
        cin>>mex>>Xor;

        ll arr[3*100000+7];
        pre(arr);
        for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        // if(computeXOR(mex-1)==Xor)
        // cout<<mex<<endl;
        // else if( (computeXOR(mex-1)^mex) == Xor){
        //     cout<<mex+2<<endl;
        // }
        // else
        // cout<<mex+1<<endl;
    }
}