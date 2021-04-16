#include<iostream>
using namespace std;
int main(){

    string a, b;
    int max = INT_MAX;

    cin>>a>>b;


    for(int i=0;i<a.size();i++){
        for(int k=0;k<=i;k++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(a[k]==b[j])
            }
        }
    }
}