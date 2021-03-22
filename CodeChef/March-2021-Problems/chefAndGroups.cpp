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
    st n;
    cin>>t;

    while(t--)
    {
        int groups =0;
        int check=0;

        cin>>n;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]=='0')
            {
                if(check != 0)
                {
                    groups++;
                    check = 0;
                }
                else
                check =0;
            }
            else if(n[i]=='1')
            {
                check++;
            }
        }
        if(check != 0)
        groups++;

        cout<<groups<<"\n";
    }
}