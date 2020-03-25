#include<bits/stdc++.h>

using namespace std;

int main()
{
    string berland,birland;
    cin>>berland>>birland;
    int result;
    for(int i=0;i<birland.size();i++)
    if(berland[i]==birland[birland.size()-i-1])
    result=0;
    else
    {
        result=1;
        cout<<"NO";break;
    }
    
    if(result==0)
    cout<<"YES";
    
    
}
