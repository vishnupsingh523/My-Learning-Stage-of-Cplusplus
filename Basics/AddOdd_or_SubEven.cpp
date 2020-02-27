#include<iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr1[size],arr2[size];
    for(int i=0;i<size;i++)
    cin>>arr1[i]>>arr2[i];

    for (int i = 0; i < size; i++)
    {
        if(arr2[i]%2==0)
        cout<<(arr1[i]-arr2[i])<<endl;
        else
        {
            cout<<(arr1[i]+arr2[i])<<endl;
        }
        
    }
    
    return 0;
}