#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long c1m=0,c2m=0,diff =0;
    while(t--){
        long long n;
        cin>>n;
        long long c1 = n/3;
        long long c2 = (n-c1)/2;
        
        while( (c1+c2*2)!=n){
            c1++;
        }

        cout<<c1<<" "<<c2<<"\n";
    }
    return 0;
}