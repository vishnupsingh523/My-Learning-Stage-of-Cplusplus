#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    string str ="";
    cin>>t;
    while (t--)
    {
        str ="";
        cin>>n>>k;
        int dif = n-k;
        for(int i=0;i<k;i++)
        str +='a';
        if(dif%3<3&&dif%3==2)
        {
            str +='b';
            str+= 'c';
        }
        else if(dif%3<3&dif%3==1)
        {
            str+='c';
        }
        
        if(str[str.size()-1]=='a')
        for(int i=2;i<dif;i+=3)
        {
            str+='b';
            str+='c';
            str+='a';
        }
        else
        {
            for(int i=2;i<dif;i+=3)
            {
                str+='b';
                str+='a';
                str+='c';
            }
        }
        
        cout<<str<<endl;
    }
    
