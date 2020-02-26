#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
    list<int> list1,list2;
    cout<<"Enter the size: ";
    int a,b,c;
    cin>>a;
    cout<<endl<<"Enter the values: ";
    for(int i=0;i<a;i++)
    {
        cin>>b>>c;
        list1.push_back(b);
        list2.push_back(c);
    }
    cout<<endl<<"The values which you have entered are: "<<endl;
    cout<<endl<<"The values in list first: ";
    list<int>::iterator itr;
    for(itr=list1.begin();itr!=list1.end();itr++)
    cout<<endl<<*itr;
    cout<<endl<<"The values in list second: ";
    for(itr=list2.begin();itr!=list2.end();itr++)
    cout<<endl<<*itr;

    return 0;
}