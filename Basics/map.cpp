// MAP - STANDARD TEMPLATE LIBRARY
// 1. associative containers -> mapped fashion.
//2.  Each element => key value , mapped value. 
//3. No two mapped values can have same key values.

//**** 4. All the elements are stored in sorted order according to the key value.



// SOME BASIC FUNCTIONS WHICH CAN BE USED IN MAP::
// erase(const g) – Removes the key value ‘g’ from the map
// clear() - Removes all the elements from the map
// swap() - function is used to exchange the contents of two maps but the maps must be of same type, although sizes may differ.
//=> map1.swap(map2)
//=> swap(map1, map2)

#include<iostream>
#include<iterator>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
    // declearation of maps: syntax: map< data_type , data_type > identifier_name;
    map<int,int> mp;

    // INSERTING THE ELEMENTS HERE:
    mp.insert(make_pair(10,20));
    mp.insert(make_pair(1,20));
    mp.insert(make_pair(6,60));
    mp.insert(make_pair(4,40));
    mp.insert(make_pair(13,100));

    //*** Printing the elements inside the map using iterator***
    map<int,int>::iterator itr; // iterator is declared

    cout<<endl<<"Printing mp map's elements: \n";
    for(itr = mp.begin();itr!= mp.end();itr++)
    cout<<"< "<<itr->first<<" , "<<itr->second<<" >"<<endl;

    // ***DELETION***
    // 1. Using key
    // cout<<endl<<"The element is deleted: "<<mp.erase(6);

    // 2. Clearing all the elements from the map container
    // mp.clear();

    // //printing the map elemetns after delition
    // cout<<endl<<endl<<"Pritning elements after deletion: "<<endl;
    // for(itr = mp.begin();itr!= mp.end();itr++)
    // cout<<"< "<<itr->first<<" , "<<itr->second<<" >"<<endl;
    // // cout<<"Empty or not : "<<mp.empty();


    //SWAPPING OF TWO MAP CONTAINERS
    map<int,int> str;
    str.insert(make_pair(100,200));
    str.insert(make_pair(20,200));
    str.insert(make_pair(10,200));
    str.insert(make_pair(400,200));

    cout<<endl<<endl<<"Printing str map's elements: \n";
    for(itr = str.begin();itr!= str.end();itr++)
    cout<<"< "<<itr->first<<" , "<<itr->second<<" >"<<endl;


    swap(str,mp);

    cout<<endl<<"Printing mp map's elements: \n";
    for(itr = mp.begin();itr!= mp.end();itr++)
    cout<<"< "<<itr->first<<" , "<<itr->second<<" >"<<endl;

    cout<<endl<<endl<<"Printing str map's elements: \n";
    for(itr = str.begin();itr!= str.end();itr++)
    cout<<"< "<<itr->first<<" , "<<itr->second<<" >"<<endl;



} 