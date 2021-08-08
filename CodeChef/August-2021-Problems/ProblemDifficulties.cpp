#include<bits/stdc++.h>
using namespace std;

#define w(t) int t;cin>>t;while(t--)

int main()
{
    w(t)
    {
        int arr[4];
        
        for(int i=0;i<4;i++)
        cin>>arr[i];

        int count =0;
    
        for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
        if(arr[i]==arr[j])
        count++;

        if(count == 0 ||count ==1 || count ==2)
        cout<<"2\n";
        else if(count==3)
        cout<<"1\n";
        else if(count ==6)
        cout<<"0\n";
    }
}