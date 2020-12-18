#include<iostream>

using namespace std;

int main()
{
    int t,m,n;
    cout<<"The no of test cases: ";
    cin>>t;
    if(t>=1 && t<=10000)
    {
        while(t--)
        {
            cout<<endl<<"Enter the values of n and m: ";
            cin>>n>>m;
            if(m>=3 && m<n && n<=100)
            {
                if(n%m==0)
                cout<<"Yes"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }
        
    }
    
    return 0;


}