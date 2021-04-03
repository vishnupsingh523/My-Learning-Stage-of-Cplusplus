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

int findGCD(ll n)
{
    ll sum =0;
    for(ll k = n;k>0;k = k/10)
    sum+= k%10;

    return __gcd(n, sum);
}
int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int n, k;
    cin>>n>>k;

    int arr[n];
    
    int minimum = INT_MAX;
    int index;
    int sum =0;
    // int value =0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(i<k)
        sum += arr[i];
        
        if(i == k-1)
        {           
            if(minimum >= sum)
            minimum = sum, index = i-k+1;
            // cout<<sum<<"\n";
        }
        else if (i > k-1)
        {
            sum = sum - arr[i-k] + arr[i];
            if(minimum >= sum)
            minimum = sum, index = i-k+1;
            // cout<<sum<<"\n";
        }
    }

    cout<<index+1;
}