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
    
    int n,k;
    cin>>n;

    string str[n];

    vector<pair<int,string>> values;

    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        values.push_back({str[i].size(), str[i]});
    }

    st mainstr;
    int maxm=0;
    for(int i=0;i<n;i++)
    {
        if(maxm< str[i].size())
        {
            maxm = str[i].size();
            mainstr = str[i];
        }
    }

    sort(values.begin(), values.end());

    // for(int i=0;i<n;i++)
    // cout<<str[i]<<endl;

    for(auto i:values)
    cout<<i.first<<" "<<i.second<<endl;
}