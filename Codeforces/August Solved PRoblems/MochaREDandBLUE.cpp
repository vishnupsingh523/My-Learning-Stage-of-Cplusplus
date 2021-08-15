#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)
#define endl "\n"
int main()
{
    w(t){
        int n;
        cin>>n;

        string str;
        cin>>str;

        if(n==1)
        {
            if(str[0]=='?')
            cout<<"B\n";
            else
            cout<<str<<endl;
        }
        if(n==2)
        {
            if(str[0]=='?'&&str[1]=='?')
            cout<<"BR\n";
            else if(str[0]=='B'&&str[1]=='?' || str[0]=='?'&&str[1]=='R')
            cout<<"BR"<<endl;
            else if(str[0]=='?'&&str[1]=='B'||str[0]=='R'&&str[1]=='?')
            cout<<"RB"<<endl;
            else
            cout<<"BR\n";
        }
        else{
            
            for(int i=1;i<n-1;i++)
            if(str[i-1]=='?'&&str[i]=='?')
        }
    
    }
}