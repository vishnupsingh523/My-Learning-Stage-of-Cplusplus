#include<iostream>
#include<math.h>
using namespace std;

int main(){

    long long n;
    cin>>n;
    long long digit = 8;
    for(long long i =1;i<=n;i++)
    {
        digit = pow(digit,i);
        digit = digit %10;
    }
    cout<<digit;
}