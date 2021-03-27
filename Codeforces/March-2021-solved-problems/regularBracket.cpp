#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n;
    cin>>t;
    string str; 
    while(t--)
    {
        cin>>n;
        cin>>str;
        int countO=0, countC=0;

        for(int i=0;i<n;i++)
        {
            if(str[i]=='(')
            countO++;
            else if(str[i]==')'&&countO)
            countO--;
            else if(str[i]==')' && countO==0)
            countC++;

        }
        cout<<countC<<"\n";
    }

}