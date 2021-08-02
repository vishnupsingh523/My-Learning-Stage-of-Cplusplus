#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N,D,H;
        cin>>N>>D>>H;
        int arr[N];

        for(int i=0;i<N;i++)
        cin>>arr[i];

        int levels = 0;
        
        for(int i=0;i<N;i++)
        {
            if(levels>H)
            break;
            
            if(arr[i]>0)
            levels += arr[i];
            else if(arr[i]==0)
            {
                levels = (levels>=D)?levels-D:0;
            }
        }

        if(levels > H)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}