#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    multiset<int> mul;
    mul.insert(10);
    mul.insert(20);
    mul.insert(5);
    mul.insert(100);
    for(const auto& e: mul){
         cout<<e<<endl;
    }
   

    return 0;
}