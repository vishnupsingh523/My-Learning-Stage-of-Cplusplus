#include<iostream>
using namespace std;

int main(){

    int n, k;
    int t;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string str;
        cin>>str;

        int countf =0,count=0;

        int i,j;

        for(i=0,j=0; i<n;i++)
        {
            if(str[i]=='*')
            {
                if(countf>=k)
                str[i] = 'x',countf=1,count++;
                j=i;
            }
            
            countf = i-j +1;
        }

        if(str[j] =='x')
        cout<<count<<"\n";
        else
        cout<<count+1<<"\n";
    }
}