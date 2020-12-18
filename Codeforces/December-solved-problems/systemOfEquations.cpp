#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int n,m;
    cin>>n>>m;
    a = sqrt(n);
    b = sqrt(m);

    int N,M;
    int count = 0;
    for(int i=0;i<=a;i++)
    for(int j=0;j<=b;j++)
    {
        N = pow(i,2) + j;
        M = pow(j,2) + i;
        if(N==n&& M == m)
        count++;
    }

    cout<<count;
}