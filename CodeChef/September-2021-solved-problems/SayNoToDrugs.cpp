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
        int n,l,k;
        cin>>n>>k>>l;

        int arr[n];
        int maxm=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>arr[maxm])
            maxm = i;
        }

        if(k<=0)
        {
            if(arr[maxm]>arr[n-1])
            cout<<"No\n";
            else 
            cout<<"Yes\n";
        }
        else
        if(arr[maxm]>=arr[n-1])
        {
            int diff =0, x=0;
            diff = arr[maxm]- arr[n-1];
            if(diff%k==0)
            x = diff/k + 1;
            else
            x = diff/k + 1;
            
            if(x>=l)
            cout<<"No\n";
            else
            cout<<"Yes\n";
        }
        else
        cout<<"Yes\n";
    }
}