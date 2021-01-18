#include<iostream>

using namespace std;

template <class change>     // here template is used to addd the strings or numbers of any type.
change Add_everything(change A, change B)
{
   return A+B;
}

int main()
{
    double a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"The value is: "<<Add_everything(a,b);

    cout<<endl<<endl<<"Enter two words: ";
    string c,d;
    cin>>c>>d;
    cout<<endl<<"The added value is: "<<Add_everything(c,d);

    return 0;
}