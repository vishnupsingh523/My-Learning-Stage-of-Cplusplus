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

#define fon(x,n) for(auto i=x;i<n;i++)
#define w(x) int x;cin>>x;while(x--)
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    w(t)
    {
        st str;
        cin>>str;
        char ch = str[0];
        int j=0;
        for(int i=1;i<str.size();i++)
        if(ch>str[i])
        {
            j = i;
            ch = str[i];
        }
        str.erase(j,1);
        cout<<ch<<" "<<str<<endl;
    }
}