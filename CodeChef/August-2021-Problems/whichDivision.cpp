#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)

int main()
{
    w(t){
        int n;
        cin>>n;
        if(n<1600)
        cout<<3<<endl;
        else if(n>= 1600 && n<2000)
        cout<<2<<endl;
        else if(n>=2000)
        cout<<1<<endl;
    }
    
}