#include<iostream>
using namespace std;

int division(int numerator, int denomenator)
{
    if(denomenator==0)
    throw "The Denomenator is Zero !!!!";   // here I have uesd the throw 
    else                            //keyword which is used to throw an exception
    return (numerator/denomenator);    
}


int main()
{
    int result;
    int numerator,denomenator;
    cout<<"Enter the values: \nNumerator: ";
    cin>>numerator;
    cout<<endl<<"Denomenator: ";
    cin>>denomenator;

    try     // try keyword is used to perform the exeption on the particular set of instructions/statements.
    {
        result= division(numerator,denomenator);
        cout<<endl<<"The result is: "<<result;
    }
    catch(const char *er)       //catch is used to get the thrown exception value
    {           //and throw sends the value in the -> const char* <- format
        if(er)      //if that exeption is true then it will print it simply.
        cout<<endl<<er;
    }
    return 0;
}