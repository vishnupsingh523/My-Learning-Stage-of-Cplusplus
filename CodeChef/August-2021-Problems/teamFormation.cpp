#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string>

#define w(t) int t;cin>>t;while(t--)
#define f(n) for(int i=0;i<n;i++)

#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    sync

    w(t){
        int n;
        cin>>n;
        string pro, eng;
        cin>>pro;
        cin>>eng;

        int both =0, first = 0, second =0, none=0;

        f(n)
        {
            if(pro[i]=='1'&&eng[i]=='1')
            both++;
            else if(pro[i]=='1')
            first++;
            else if(eng[i]=='1')
            second++;
            else
            none++;
        }

        int ans =0;
        
    }
    
}