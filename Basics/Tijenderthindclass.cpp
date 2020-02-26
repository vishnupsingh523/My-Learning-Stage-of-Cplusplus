#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    double a;
    cout<<"Enter a value to use the hexa desimal: ";
    cin>>a;
    cout<<endl<<setbase(16)<<a;
   /* 
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    string s[a];

    cout<<"Enter any string here...... \n"<<endl;

    for(int i=0;i<a;i++)
    {
        getline(cin>>ws,s[i]);
    }
100.345

    cout<<"The string which you have entered: \n\n";
    for(int i=0;i<a;i++)
    {
        cout<<s[i]<<endl;
    }
   */

    return 0;
}
/*
//using differents types of pointers in the c++ programmmm...........
#include<iostream>

using namespace std;

int main(){
    int i;
    const int a=10;
    int *const p=&i;
    const int *const t=&a;
    cout<<"Enter the values: ";
    cout<<endl<<"first integer: ";
    cin>>i;

    cout<<endl<<"Printing the interger value with the help of pointer: ";
    cout<<p<<endl<<*p<<endl;

    cout<<"second integer: ";
    cin>>i;

    cout<<endl<<"Printing the interger value with the help of pointer: ";
    cout<<p<<endl<<*p;

    cout<<endl<<"Printing the second integer value with the help of pointer: ";
    cout<<t<<endl<<*t;
    return 0;
}
*/

/*int value;
    float num;  

    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter the precision velue: ";
    cin>>value;
    for(int i=3;i<value;i++)
    {
        cout<<setprecision(i)<<num<<endl;/*
    /*cout<<"Enter a string: ";
    cin>>s;
    cout<<"Enter a num to use stew function: ";
    cin>>num;
    cout<<setw(num)<<s<<endl;*/
   
    //}
   /* cout<<"Enter a number: ";
    cin>>value;
    cin>>num;

    cout<<"\nHexadecimal: "<<hex<<value<<endl;
    cout<<"\nOctal base: "<<oct<<value<<endl;
    cout<<"\nDecimal: "<<dec<<value<<endl;

    cout<<"Setbase: "<<setbase(value);
    cout<<num<<endl;
    */





/*

class demo{
    int x,y;
    string z;
    public:
    demo(int a, int b,string l="Robert Kayosaki"){
        x=a;y=b;
        z=l;
    }
    friend class frnd;
};
// For using friend class you have to make the friend class

class frnd{
    public:
    void display(demo d1){
        cout<<"x is = "<<d1.x<<endl;
        cout<<"y is = "<<d1.y;
         for(int i=0;i<d1.z.size();i++)
        cout<<"z is = \a"<<d1.z[i];
        }
        void name(demo d3){
            cout<<endl<<"Difference: "<<d3.x-d3.y;
            cout<<endl<<"Sum: "<<d3.x+d3.y;
            for(int i=0;i<d3.z.size();i++)
            cout<<endl<<"String: \a"<<d3.z[i];
        }
};
// The main function will do all the work from calling to everything

int main()
{ 
    string s;
    int n;
    cout<<"Enter the size of the string (more than two or two) = ";
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>s[i];
    demo d2(10,40);
    frnd f;
    f.display(d2);
    f.name(d2);
    return 0;
}
*/