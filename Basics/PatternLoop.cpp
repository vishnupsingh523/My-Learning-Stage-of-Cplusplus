#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n;
    int arr[100][100];

    // assigning value to the 1;
    for(int i=0;i<n+n-1;i++)
    {for(int j=0;j<n+n-1;j++)
        arr[i][j]=a;
        a--;
    }
    cout<<endl;

    for(int i=0;i<n+n-1;i++)
    {for(int j=0;j<n+n-1;j++)
        cout<<arr[i][j]<<" ";
    cout<<endl;
    }
    return 0;
}