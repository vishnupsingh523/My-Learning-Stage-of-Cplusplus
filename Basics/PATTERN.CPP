#include<iostream>
using namespace std;

int main(){
    
    int enter;
    cin>>enter;
    int number=1;
    char ch='*';
    
    for(int i=enter-s-1;i>=0;i--)
        cout<<" ";
        cout<<"*"
    for(int s=0;s<=enter;s++)
    {
        for(int i=enter-s-1;i>=0;i--)
        cout<<" ";
        if(number==s)
        cout<<"/";
        for(int i=0;i<(2*s-1);i++)
        cout<<"*";
        if(s==number)
        {
            cout<<"\\";
            number++;
        }

        cout<<endl;

    }
    
}