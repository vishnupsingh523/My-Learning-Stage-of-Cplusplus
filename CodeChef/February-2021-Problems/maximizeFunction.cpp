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
        cin>>n;
        ll a[n];
        ll maximum = LONG_LONG_MIN;
        ll x,y,z;
        ll value =0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k = j+1; k<n;k++)
                {
                    x=a[i];
                    y=a[j];
                    z = a[k];
                    value =0;
                    
                    value = (x>y)?x-y:y-x;
                    value+= (y>z)?y-z:z-y;
                    value+= (z>x)?z-x:x-z;
                    if(maximum<value)
                    maximum = value;
                }
            }
        }
        cout<<maximum<<endl;

        // ans = 2*(max(a)-min(a)); cout<<ans;
    }
}