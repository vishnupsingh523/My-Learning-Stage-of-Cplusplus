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
    
    ll t, n, k;

    cin>>t;
    while(t--)
    {
        ll arr[10];
        ll i,j;
        for(i=0;i<10;i++)
        {
            cin>>arr[i];
        }

        cin>>k;
        for(j =9;j>=0;j--)
        {
            if(arr[j] !=0 )
            {
                if(arr[j]>k)
                {
                    break;
                }
                else if(arr[j]==k)
                {
                    n = k;
                    k = k-arr[j];
                    arr[j] = 0;
                }
                else{
                    k = k - arr[j];
                    arr[j]=0;
                }
            }
        }

        cout<<j+1<<endl;
    }

}