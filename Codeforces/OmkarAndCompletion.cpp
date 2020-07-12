#include<iostream>
using namespace std;

int main()
{
  int n;  //the size of the array a
  cin>>n;
  int a[n];
  
  //entering the values of array;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    
    //printing the output of the program here
    for(int j=0;j<a[i];j++)
    cout<<"1 ";
    cout<<endl;
  }
  
  return 0;
}
