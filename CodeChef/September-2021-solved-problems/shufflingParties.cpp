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
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        
        ll odd = (n+1)/2, even = n/2;
        ll oddCount=0, evenCount=0;
        ll maxSum=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            evenCount++;
            else 
            oddCount++;
        }

        if(odd <= evenCount)
        maxSum = odd;
        else
        maxSum = evenCount;

        if(even <= oddCount)
        maxSum += even;
        else
        maxSum += oddCount;

        cout<<maxSum<<endl;
    }
}