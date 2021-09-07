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
    
    int n;
    st str;
    cin>>n;
    cin>>str;

    int maxstt=0;
    int maxm = INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        char a=str[i], b=str[i+1];
        int count =0;
        for(int j=i+1;j<n-1;j++)
        {
            if(str[i]==str[j]&&str[i+1]==str[j+1])
            count++;
        }

        if(count>maxm)
        {
            maxm = count;
            count=0;
            maxstt = i;
        }
    }

    cout<<str[maxstt]<<str[maxstt+1];
    
}