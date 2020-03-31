#include<iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    string enter;
    int size;
    int count=0;
    while(test--)
    {
        cin>>size;
        cin>>enter;
        count=0;
        for(int i=size-11;i>=0;i--)
        {
            if(enter[i]=='8')
            {
                count++;
                break;
            }
        }
        if(count!=0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}