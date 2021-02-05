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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        st str;
        cin>>n;
        cin>>str;
        int total0 =0, total1=0;
        for(int i=0;i<n;i++){
            if(str[i]=='0')
            total0++;
            else
            total1++;
        }
        
        int ans = min(total0, total1);
        int curr0 = 0, curr1 = 0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0')
            curr0++;
            else
            curr1++;

            ans = min(ans, curr1 + (total0 - curr0));
        }

        cout<<ans<<"\n";
    }
}