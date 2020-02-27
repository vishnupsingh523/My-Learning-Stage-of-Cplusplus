#include <bits/stdc++.h>

using namespace std;

class mountain{
    int element;    // to take the value of the elements of the each test case.
    vector<int> height; //used to store the elements of each testcases.
    public:
    int getelement(int n){  //returing fuction the value of the max. element.
        for(int i=0;i<n;i++)
        {
            cin>>element;
            height.push_back(element);  // Pushing the values in the vector.
        }
        int e=*max_element(height.begin(),height.end());//calculating the max.
        return e;   //returning the max element to the main fuction variable.
    }
};
int main()
{
    int Test;   // To know the no of test cases entered.
    cout<<"Enter the test Cases: ";
    cin>>Test;          //Inputing the no of test cases.
    int peakhight[10];      //to store the highest of the test cases elements

    mountain T[Test];       // objects are created according the test cases of class mountain
    for(int i=0;i<Test;i++)
    {
        cout<<"\nEnter the size: ";
        int size;       // For entering the size of the each test cases
        cin>>size;
        peakhight[i]=T[i].getelement(size); //called the function using array of objects.
    }
    for(int i=0;i<Test;i++)
    cout<<peakhight[i]<<endl;       //Printing the values of the highest
                                    //element of the each testCases.
    return 0;
}