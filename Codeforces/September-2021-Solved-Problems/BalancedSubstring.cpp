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

ll log(int base, ll x)
{
    return (ll)(log(x)/log(base));
}

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
        st str;
        cin>>str;
        int l,r;
        bool check=false;
        for(int i=0;i<n-1;i++)
        {
            if(str[i]=='a'&&str[i+1]=='b')
            {
                l = i;
                r = i+1;
                check = true;
                break;
            }
            if(str[i]=='b'&&str[i+1]=='a')
            {
                l = i;
                r = i+1;
                check = true;
                break;
            }
        }
        if(check)
        cout<<l+1<<" "<<r+1<<endl;
        else
        cout<<-1<<" "<<-1<<endl;

    }
}