#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int error1=0,error2=0,error3=0;
    int no_of_errors;
    cin>>no_of_errors;
    int elements;

    for(int i=0;i<no_of_errors;i++)
    {
        cin>>elements;
        error1+=elements;
    }
    for(int i=0;i<no_of_errors-1;i++)
    {
        cin>>elements;
        error2+=elements;
    }
    for(int i=0;i<no_of_errors-2;i++)
    {
        cin>>elements;
        error3+=elements;
    }
            
    cout<<error1-error2<<endl<<error2-error3;

    return 0;
}