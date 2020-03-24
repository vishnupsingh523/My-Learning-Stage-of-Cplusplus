#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void Check_User(string Username, string Password);

void Login_page()
{
    string Username,Password;
    cout<<"\t\tWELCOME TO THE LOGIN PAGE";
    cout<<"\n\n\n\t\t\tENTER THE DETAILS BELOW";
    cout<<"\n\n\t\tUsername : ";
    cin>>Username;
    cout<<"\n\n\t\tPassword : ";
    cin>>Password;
    Check_User(Username,Password);
}

int main()
{
    Login_page();
    return 0;
}

void Check_User(string Username,string Password)
{
    string c_username;
    int count=0;
    fstream check;
    check.open("Account_Details.txt",ios::out|ios::in|ios::app);
    check.seekg(ios::beg);
    while(!check.eof())
    {
        check>>c_username;
        if(c_username==Username)
        {
            count=1;
            cout<<endl<<c_username;
            cout<<"\nYou are allowed to get access:";
            break;
        }
    }
    if(count==0)
    cout<<"You are the fucking ROBBER YOU BITCH COME I WILL FUCK YOUR ASS";
}