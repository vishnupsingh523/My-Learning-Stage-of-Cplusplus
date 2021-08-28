#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)
#define endl "\n"

#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    sync

    w(t)
    {
        long long n;

        cin>>n;

        // long long odd = (n+1)/2;
        // if(n == 2)
        // cout<<1<<endl;
        // if( odd %2 ==0)
        // cout<<n<<endl;
        // else if(n%4 ==0)
        // cout<<n<<endl;
        // else if(n%2==0)
        // cout<<n-1<<endl;
        // else
        // cout<<(n/4)*4<<endl;
        
        if( (n + 1)%4 ==0 )
        cout<<n<<endl;
        else if(n%4==0)
        cout<<n<<endl;
        else if( (n-1)%4==0)
        cout<<(n-1)<<endl;
        else if(n%2==0)
        cout<<(n-1)<<endl;
    }
}