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
        int n,k;
        cin>>n>>k;

        vll values; 
        if(n != 1)
        {
            for(int i=1;i<=n;i++)
            {
                if(n<k)
                {
                    int check = k-n;
                    int Min = min(check, n);
                    values.push_back(max(check,n));
                    
                    find(values.begin(), values.end(), Min);

                }
                
                if(n>k)
                values.push_back(i);
            }

            cout<<values.size()<<"\n";
            for(int i=0;i<values.size();i++)
            cout<<values[i]<< " ";

            cout<<"\n";
        }
        else 
        cout<<0<<endl;
    }
}