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
    
    ll t;
    ll n;
    cin>>t;
    while(t--)
    {        
        cin>>n;
        
        ll arr[n];
        ll count= 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                if(arr[i-1] == arr[i])
                {
                    count++;
                    arr[i]++;
                }
                else if(arr[i-1] < arr[i])
                {
                    count = count + (arr[i-1]-arr[i]) +1;
                    arr[i] = arr[i-1]+1;
                }
                else if(arr[i] > arr[i-1]+1){
                    count = count + (arr[i] - arr[i-1]);
                    arr[i] = arr[i-1] + 1;
                }
            }
        }
        
        if(count%2==0)
        cout<<"Second\n";
        else
        cout<<"First\n";
    }
}