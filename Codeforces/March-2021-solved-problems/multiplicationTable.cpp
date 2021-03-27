#include<bits/stdc++.h>

using namespace std;

int main(){
    long long x,n;
    cin>>n>>x;

    long long ans =0;
    for(int i=1;i<=n;i++)
    if(x%i==0)
    if(x/i<=n)
    ans++;

    cout<<ans;
}