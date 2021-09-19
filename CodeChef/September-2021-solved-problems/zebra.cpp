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

void arrFill(int * arr, int n)
{
    for(int i=0;i<n;i++)
    arr[i] =0;
}
int main() {
    sync
    
    ll t;
    cin>>t;
    while(t--)
    {
        int n,k;
        string str;
        cin>>n>>k;
        cin>>str;

        int cnt=0;
        char curr =str[0];
        int index =0;
        for(int i=1;i<n&&cnt<k;i++)
        if(str[i] != curr)
        {
            cnt++;
            curr = str[i];
            index = i;
        }

        for(int i=n-1;i<n;i--)
        if(str[index] == str[i])
        {
            index = i;
            break;
        }

        if(cnt < k)
        cout<<-1<<endl;
        else
        cout<<index+1<<endl;
    }
}