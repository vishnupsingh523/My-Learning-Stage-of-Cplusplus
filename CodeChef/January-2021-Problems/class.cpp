#include<bits/stdc++.h>

using namespace std;

int convergingPointer(int * arr, int &n)
{
    int left = 0;
    int right = n-1;

    while(left != right)
    {
        if(arr[left]==0)
        {
            if(arr[right]==0)
            {
                right--;
                n--;
            }
            else
            {
                arr[left] = arr[right];
                right--;
                left++;
                n--;
            }
        }
        else
        {
            left = left + 1;
        }
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"\nEnter the values of the array:\n";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    convergingPointer(arr,n);

    cout<<"\nPrinting the new array :  ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"  ";
}