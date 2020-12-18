#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][2];
    int index = 0;
    int i=0;
    for(int k = 0;k<n;k++)
    arr[k][1]=0;
    
    for( i=0;i<n&&index<n;i++)
    {
        index++;
        cin>>arr[i][0];
        for(int j=0;j<i;j++)
        {
            if(arr[j][0]==arr[i][0])
            arr[j][1]++,i--;
        }
    }

    int max = INT_MIN;
    for(int j=0;j<i;j++)
    if(arr[j][1]>max)
    max = arr[j][1];

    cout<<max+1<<" "<<i;
}