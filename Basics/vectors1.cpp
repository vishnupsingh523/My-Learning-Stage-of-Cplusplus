//VECTORS : STANDARD-TEMPLATE-LIBRARY

// Vectors are like dynamic arrays with the ability to resize itself automatically
//  when an element is inserted or deleted, with their storage being handled automatically by the container. 
// Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. 
// In vectors, data is inserted at the end. 

// SOME BASIC FUNCTIONS USED IN THE VECTORS
/*
 1. push_back(const g) - inserts the element at the last where g is the element value
 2. pop_back() - removes the element from the last or form the end of the container
 3. clear() – It is used to remove all the elements of the vector container
 4. size() - It returns the number of elements in the vector container
 5. empty() - It return that wheather the vector is empty or not.
 
 */

//REQUIRED HEADER FILES:
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Decleration of vector-> Syntax:     vector<data_type> vector_name;  
    vector<vector<int>> number;

    // Inserting the elements inside the vector;
    //  Using push_back() function
    int value;
    cout<<"Enter the values: "<<endl;
    for(int j=0;j<3;j++)
    {
        cin>>value;
        number.push_back(value);
    }

    number.push_back(4);
    cout<<"All values are inserted successflly."<<endl;

    // Printing the values
    //1. Using vector iteself like arrays using their name;
    cout<<endl<<"Printing using VECTOR name: "<<endl;
    for(int j=0;j<number.size();j++)
    {
        cout<<" -> "<<number[j]<<endl;
    }

    //Deleting the elements:
    // using the pop_back() function
    number.pop_back();
    //2. Using iterator
    vector<int>:: iterator itr;
    cout<<endl<<"Printing using ITARATOR: "<<endl;
    for(itr = number.begin();itr!= number.end();itr++)
    cout<<" -> "<<*itr<<endl;

    //NUMBER OF ELEMENTS IN THE VECTOR:
    cout<<endl<<"Deleting all the elements from the vector: ";
    number.clear();
    
    // EMPTY OR NOT
    if(number.empty()==0)   //if it returns 0 means that the container is not empty
    cout<<endl<<"IT is not empty.";
    else    // else it is empty
    cout<<endl<<"Yes, it is empty.";
    
}