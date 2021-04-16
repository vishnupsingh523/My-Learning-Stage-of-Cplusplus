#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin>>t;
    
    long long n,m, value, row;

    while(t--)
    {
        cin>>n>>m;
        string str = "";
        for(int i=0;i<n;i++)
        {
            str = "";
            
            for(int j = 0;j<m;j++)
            {
                if(i<n-1)
                {
                    if((i+j)%2==0)
                    str+= 'B';
                    else
                    str+='W';
                }
                else{
                    if( ((i+j)%2==0) || j==m-1 || j == 0)
                    str+= 'B';
                    else
                    str+='W';
                }
            }
            cout<<str<<"\n";
        }
    }
}