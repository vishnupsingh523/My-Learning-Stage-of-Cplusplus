#include<iostream>
using namespace std;

int main(){
    int t;
    int n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];

        for(int i=0;i<n;i++)
        if(arr[i]%2==1)
        cout<<arr[i]<<" ";
        
        for(int i=0;i<n;i++)
        if(arr[i]%2==0)
        cout<<arr[i]<<" ";
        
    }
}