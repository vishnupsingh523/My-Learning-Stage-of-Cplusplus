#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;

        bool ans = false;

        if(A)
        {
            if(B)
            {
                if(C)
                ans =false;
                else 
                ans = true;
            }
            else 
            ans = true;
        }
        else
        {
            if(B)
            {
                ans = true;
            }
            else
            {
                if(C)
                ans =true;
                else 
                ans = false;
            }

        }

        if(ans)
        cout<<"1\n";
        else
        cout<<"0\n";        
    }
}