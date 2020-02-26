#include<iostream>
using namespace std;

class area{
    int side;
    public:
    area(int x){
        x=30;
        side=10;
        cout<<x<<endl;
    }
    area(double y){
        y=13.8;
        cout<<y<<endl;
    }
    area(const area &a4){
        cout<<a4.side;
    }
};

int main(){
    area a1(10);
    area a2(14.9003);
    area a3(a2);  
    
    return 0;
}