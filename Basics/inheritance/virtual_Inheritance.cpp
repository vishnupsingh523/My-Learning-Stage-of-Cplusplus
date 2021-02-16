#include<iostream>

using namespace std;

// this is for virtual class concept which show errors sometimes.
class Student{
    public:
    
    void show(){
        cout<<"Roll Number: "<<11912424<<"\nName : Vishwanath Pratap Singh";
    }
};

// class ParentA : public Student
// {

// };
// class ParentB : public Student
// {

// };

// if we use it like this means without adding virtual keyword at the declaration of classes ParentA and ParentB
//so it will definately will be showing the error 
/*
virtual_Inheritance.cpp: In function 'int main()':
virtual_Inheritance.cpp:31:7: error: request for member 'show' is ambiguous
     t.show();
       ^
virtual_Inheritance.cpp:9:10: note: candidates are: void Student::show()
     void show(){
          ^
virtual_Inheritance.cpp:9:10: note:                 void Student::show()
*/

class ParentA : virtual public Student{

};
class ParentB : public virtual Student{

};
/*
with this it will not be showing any error

Roll Number: 11912424
Name : Vishwanath Pratap Singh
*/
class Teacher : public ParentA, public ParentB{
    
};

int main()
{
    // Creating the object of teacher of class
    Teacher t;
    t.show();
}