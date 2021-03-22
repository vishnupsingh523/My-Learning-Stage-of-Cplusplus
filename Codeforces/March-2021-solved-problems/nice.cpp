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
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    int n;
    cin>>n;

    int arr[n][n];
    int a,b;

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
        if(arr[i][j] == 1)
        {
            a=i,b=j;
        }
    }

    int midC = n/2 - a;
    int midR = n/2 - b;

    cout<<abs(midC+midR);
}