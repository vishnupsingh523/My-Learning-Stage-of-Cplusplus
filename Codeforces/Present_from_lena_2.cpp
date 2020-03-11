#include<iostream>

using namespace std;

int main()
{

    int n;
    cout<<"Enter the value to print the pattern: ";
    cin>>n;
    cout<<endl; 

    for(int i=0;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        cout<<"  ";

        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(i!=j)
            cout<<" ";
        }
            
        for(int j=i-1;j>=0;j--)
        {
            if(j!=i)
            cout<<" ";
            cout<<j;
        }
        cout<<endl;

    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j<=n-1;j++)
        cout<<"  ";

        for(int j=0;j<=i;j++)
        {
            cout<<j;
            if(j!=i)
            cout<<" ";
        }

        for(int j=i-1;j>=0;j--)
        {
            cout<<" ";
            cout<<j;
        }

        cout<<endl;
    }
    return 0;
}