#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  long long n;
  
  cin>>t;
  
  while(t--)
  {
    cin>>n;
    long long amount =0;
    for(int i=1;i<=n/7;i++)
    amount = amount+(i*2 + 6)*7/2;
    
    cout<<amount<<" ";

    for(int i=0;i<n%7;i++)
    {
        amount+= i+(1+n/7);
    }
    cout<<amount<<endl;
  }
  
  return 0;
}