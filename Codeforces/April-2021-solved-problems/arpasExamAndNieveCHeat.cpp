#include<iostream>
#include<math.h>
using namespace std;

int main(){

    long long n;
    cin>>n;
    long long digit = pow(8,n);
    cout<<digit%10;
}