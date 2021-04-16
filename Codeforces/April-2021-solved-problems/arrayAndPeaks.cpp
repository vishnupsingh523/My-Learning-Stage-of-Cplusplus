#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    int n, k;
    
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        
        if(n/2<=k&&k!=0)
        cout<<-1<<"\n";
        else
        {
            int arr[n];
            for(int i=0;i<n;i++)
            {
                arr[i]=i+1;
            }
            for(int i=1;i<n-1;i++)
            {
                if(arr[i]<arr[i-1])
                {
                    swap(arr[i], arr[i-1]);

                    if(arr[i]<arr[i-1])
                    swap(arr[i], arr[i+1]);
                }
                else if(arr[i]<arr[i-1])
                    swap(arr[i], arr[i+1]);
            }

            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
}