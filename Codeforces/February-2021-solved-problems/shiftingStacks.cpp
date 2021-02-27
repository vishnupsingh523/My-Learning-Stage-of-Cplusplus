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
    
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vll height;
        ll value;
        int countZ=0;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            if(value ==0)
            countZ++;
            height.push_back(value);
        }
        sort(height.begin(), height.end());
        ll curr = height[0];
        int count =0;

        if(countZ==n)
        cout<<"NO\n";
        else
        {
            for(int i=1;i<n;i++)
            {
                if(curr==height[i])
                count++;
            }
            if(count==n-1)
            cout<<"YES"<<endl;
            else if(count == 0)
            cout<<"YES"<<endl;
            else
            cout<<"NO\n";
        }
        
    }
}