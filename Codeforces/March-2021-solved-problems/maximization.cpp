#include<iostream>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[101];
        int x;

        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr[x]++;
        }

        int count =0;
        x = 0;
    
        for(int i=0;i<=100&&x<n;i++)
        {
            if(arr[i]>0)
            {
                cout<<i<<" ";
                arr[i]--;
                x++;
            }
            
            count = (arr[count]<arr[i] && arr[i]>0)?i:count;

            if(arr[count]>0&&i==100)
            i=-1;
        }

        cout<<"\n";
    }
}