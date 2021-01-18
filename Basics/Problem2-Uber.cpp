#include<iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    cin>>array[i];

    int new_arr[size];
    cout<<"The required array is : ";
    for(int i=0;i<size;i++)
    {
        new_arr[i]=1;
        for(int j=0;j<size;j++)
        if(i==j)
        {}
        else    
        new_arr[i]*=array[j];
        cout<<new_arr[i]<<" ";
    }
    return 0;
}