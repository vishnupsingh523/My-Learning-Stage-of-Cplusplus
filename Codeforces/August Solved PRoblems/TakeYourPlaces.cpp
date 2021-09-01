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
    
    w(x)
    {
        int n;
        cin>>n;
        ll arr[n];

        for(int i=0;i<n;i++)
        cin>>arr[i];

        if(n==1)
        cout<<0<<endl;
        else if(n==2)
        {
            if(arr[0]%2!=arr[1]%2)
            cout<<0<<endl;
            else
            cout<<-1<<endl;
        }
        else{
            int ans =0;

            for(int j=0;j<n;j++)
            {
                for(int i=0;i<n-1;i++)
                {
                    if(arr[i]%2==arr[i+1]%2)
                    {
                        if(arr[i+2]%2!=arr[i]%2)
                        {
                            swap(arr[i+2], arr[i+1]);
                            ans++;
                            break;
                        }
                        // else
                        // i++;
                    }
                }
            }
            for(int j=0;j<n;j++)
            {
                for(int i=n-1;i>=0;i--)
                {
                    if(arr[i]%2==arr[i-1]%2)
                    {
                        if(arr[i-2]%2!=arr[i]%2)
                        {
                            swap(arr[i-2], arr[i-1]);
                            ans++;
                            break;
                        }
                    }
                }
            }

            bool ch = false;

            for(int i=0;i<n-1;i++)
            {
                if(arr[i]%2==arr[i+1]%2)
                {
                    ch = true;
                    break;
                }
            }
            if(ch)
            cout<<-1<<endl;
            else
            cout<<ans<<endl;
        }
    }
}