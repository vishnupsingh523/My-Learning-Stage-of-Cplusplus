#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1("Hello World.");
    string s2(s1,3,6);
    cout<<s1<<endl<<s2;
    string s3;
    s3=s1+s2;
    cout<<endl<<s3;
    cout<<endl<<"Enter any vlaue of string:";
    string s4;
    cin>>s4;
    string s5;
    cout<<endl<<"Enter the second Value:";
    getline(cin,s5);
    cout<<endl<<"The values which you have entered: ";
    cout<<endl<<s4<<endl<<s5;


    return 0;
}