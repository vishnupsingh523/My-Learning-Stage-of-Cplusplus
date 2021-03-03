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
    
    st value;
    cin>>value;
    st actual = value;
    reverse(value.begin(), value.end());

    string check = "BCDEFGJKLNPQRSZ";
    for(int i=0;i<value.size();i++)
    for(int j=0;j<check.size();j++)
    if(actual[i]==check[j])
    {
        cout<<"NO";
        return 0;
    }

    if(actual==value)
    cout<<"YES";
    else
    cout<<"NO";
}