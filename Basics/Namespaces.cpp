#include<iostream>
using namespace std;

namespace orange{
    void no_of_fruits(int n){
        cout<<endl<<"The number of oranges: "<<n;
    }
}

namespace apple{
    void no_of_fruits(int n){
        cout<<endl<<"The number of apple: "<<n;
    }
}


int main(){

    int apple, orange;
    cout<<"Enter the number fo apples: ";
    cin>>apple;
    cout<<endl<<"Enter the number of oranges: ";
    cin>>orange;
    apple::no_of_fruits(apple);
    orange::no_of_fruits(orange);

    return 0;
}