#include<iostream>
using namespace std;

class factorial{
    int fact;
    public:

    int operator !()        // '!' is used to perform the function 
    {
        int value=1;
        for(int i=1;i<=fact;i++)
        value*=i;
        return value;
    }

    void input(){
        cin>>fact;
    }
    
};

int main(){
    int fact;
    factorial num;
    cout<<"Enter any no. to find factorial: ";
    num.input();
    fact= !num;
    cout<<endl<<"The factoria is: "<<fact;
    return 0;
}