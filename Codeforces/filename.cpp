#include<iostream>

using namespace std;

int main()
{
    int size;
    string str;
    int count =0;
    cout<<"Enter the size of the string (b/w 3 to 100):\n";
    cin>>size;
    cout<<endl<<"enter the string: ";
    cin>>str;
    for(int i=0;i<size-2;i++)
    {
        
        if(str[i]=='x'&&str[i+1]=='x'&&str[i+2]=='x')
        count++;
    }
    if(count==0)
    cout<<"The string is to be deleted are:  "<<count;
    else
    {
        cout<<"The string is to be deleted are:   "<<count;
    }
    
    return 0;
}