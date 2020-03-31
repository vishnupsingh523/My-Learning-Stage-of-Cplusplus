#include<iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;
    while(size--)
    {
        int t;
        cin>>t;
        string enter;
        cin>>enter;
        string a,b;
        a="",b="";
        bool check=true;
        for(int i=0;i<t;i++)
        {
            if(check)
            if(enter[i]=='2') a+='1',b+='1';
            else if(enter[i]=='0') a+='0',b+='0';
            else a+='1',b+='0',check=false;

            else a+='0',b+=enter[i];
        }
        cout<<a<<endl<<b<<endl;
        }
}