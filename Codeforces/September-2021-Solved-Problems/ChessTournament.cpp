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
        
        char arr[n][n];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                arr[i][j] = 'X';
                else
                {
                    if(str[i]=='1'&&str[j]=='1')
                    arr[i][j]='=';
                    else if(str[i]=='2'&&str[j]=='2')
                    {
                        arr[i][j] = '+';
                        arr[j][i] = '-';
                    }
                    else if(str[i]=='2'&&str[j]=='1'){
                        arr[i][j] = '-';
                        arr[j][i] = '+';
                    }else
                    {
                        arr[i][j] = '+';
                        arr[j][i] = '-';
                    }
                }
            }
        }
        
        int cnt=0;
        for(int i=0;i<n;i++)
        if(str[i]=='2')
        cnt++;

        if(cnt!=1)
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                cout<<arr[i][j];
                cout<<endl;
            }
        }
        else
        cout<<"NO\n";
    }
}