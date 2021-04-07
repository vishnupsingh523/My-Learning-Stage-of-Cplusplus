#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    cin>>t;
    
    long long n,m, value, row;

    while(t--)
    {
        cin>>n>>m>>value;

        long long mod = value%n, div = ceil(value/n);

        if(mod ==0)
        row = m * (n-1) + div ;
        else 
        row = (mod-1)*m + div+1;
        cout<<row<<"\n";
    }
}