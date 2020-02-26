#include<iostream>
#include<math.h>

using namespace std;

class circle{
float r,area;
public:
void input();
int calculate();
friend void display();

};

class rectangle{
    float l,w,area;
    public: 
    void input();
    int calculate();
    friend void display();

};

void circle::input(){
    cout<<"Enter the radius: ";
    cin>>r;
}
int circle::calculate(){
    area=2*3.14*pow(r,2);
    return area;
}
void rectangle:: input(){
    cout<<endl<<"Enter the values\nLength= ";
    cin>>l;
    cout<<"Breadth= ";
    cin>>w;
}
int rectangle:: calculate(){
    area=l*w;
    return area;
}
void display(){
    circle c;
    rectangle r;
    float a,b;
    a=c.calculate();
    b=r.calculate();
    cout<<endl<<"The areas are : \n\nCircle: "<<a<<"Rectangle: "<<b;
    cout<<"\n\nTHANK YOU......";
}
int main()
{
    circle c1;
    rectangle r1;
    c1.input();
    c1.calculate();
    r1.input();
    r1.calculate();
    display();
    return 0;
}