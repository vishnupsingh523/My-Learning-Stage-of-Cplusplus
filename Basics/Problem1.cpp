#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the list: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cout<<endl<<"Enter the number: ";
    cin>>k;
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    if(arr[i]+arr[j]==k)
    cout<<endl<<"The result is: "<<arr[i]<<" + "<<arr[j]<<" = "<<k;
    
    return 0;
}