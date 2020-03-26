#include<bits/stdc++.h>

using namespace std;

int main()
{
    string first,second,third,result;
    cin>>first>>second>>third;

    result= first+second;
    

    sort(third.begin(),third.end());
    sort(result.begin(),result.end());

    if(third==result)
    cout<<"YES";
    else
    cout<<"NO";
    

}
