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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count =0;
        int denseCount =0;
        
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                float denseMax = (arr[i]>arr[i-1])?arr[i]:arr[i-1];
                float denseMin = (arr[i]>arr[i-1])?arr[i-1]:arr[i];
                float value = denseMax/denseMin;
                if(value>2)
                {
                    count++;
                    for(ll j = (int)denseMin*2; j<denseMax && j/(int)denseMin<=2; j= j*2)
                    {
                        denseCount++;
                        denseMin = j;
                    }
                }
            }
        }

        if(count==0)
        cout<<0<<endl;
        else
        cout<<denseCount<<endl;
        
    }
}