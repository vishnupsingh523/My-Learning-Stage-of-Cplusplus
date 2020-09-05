#include<iostream>
using namespace std;

int main()
{
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        long long a,b,c=0,count = 0;
        // inputing the intergers a and b
        cin>>a>>b;
        // if a and b are equal to each other then it will simply set the count = 0
        // which means 0 operation needed to be performed in it
        // 1.
        if(a==b)
        count = 0;
        else 
        {
            c = (a>b)? a-b: b-a;

            if(c%10==0)
            count = c/10;
            else
            {
                count = c/10 + 1;
            }
        }
        cout<<count<<endl;
    }
}
