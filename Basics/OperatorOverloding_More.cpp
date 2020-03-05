#include<iostream>
#include<stdlib.h>
using namespace std;

// this is about the operator overloding... an important concept of c++
// Something more about the opetator overloding using - sign;

class Add_Complex{
    
    float real,imag;
    public:

    Add_Complex(): real(0), imag(0){};  // this is the one more method of initializing the datamembers.
    
    void input_data(){      //Function to take the inputs of the real and imaginary parts.
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the imaginary part: ";
        cin>>imag;
    }

    Add_Complex operator -(Add_Complex C){      //Using operator overloading or inintializing the operators with the help of - sign
        Add_Complex temp;
        temp.real=real + C.real;
        temp.imag=imag+ C.imag;
        return temp;
    }

    void display_data(){        //Function to display the result of the real and imaginary part
        if(imag<0)
        {
            cout<<endl<<"The result is :   "<<real<<" "<<imag<<"i";
        }
        else{
            cout<<endl<<"The result is :   "<<real<<" + "<<imag<<"i";
        }
    }
};

int main()
{
    system("cls");      //Function to clear the screen.

    Add_Complex c1,c2,result;

    c1.input_data();        //taking the data from the objects of the class.
    c2.input_data();
    result = c1-c2;         //Here we are using the operator overloading method, to subtract the complex numbers.
    result.display_data();

    return 0;
}