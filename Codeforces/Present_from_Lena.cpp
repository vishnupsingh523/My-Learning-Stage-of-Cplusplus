#include<iostream>
 
using namespace std;
 
int main()
{
 
    int n;
    cout<<"Enter the no whose pattern you want to print : ";
    cin>>n;
    cout<<endl;
    
    for(int i=0;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        cout<<"  ";
 
        for(int j=0;j<=i;j++)
        cout<<j<<" ";
 
        for(int j=i-1;j>=0;j--)
        cout<<j<<" ";
        cout<<endl;
 
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j<=n-1;j++)
        cout<<"  ";
 
        for(int j=0;j<=i;j++)
        cout<<j<<" ";
 
        for(int j=i-1;j>=0;j--)
        cout<<j<<" ";
 
        cout<<endl;
    }
    return 0;
}
