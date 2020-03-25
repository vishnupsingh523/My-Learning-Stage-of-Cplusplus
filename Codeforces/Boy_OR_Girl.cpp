#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    vector<char> values;
    string enter;
    cin>>enter;
    for(int i=0;i<enter.size();i++)
    values.push_back(enter[i]);
    sort(values.begin(),values.end());
    vector<char>::iterator ip;
    ip= unique(values.begin(),values.end());
    values.resize(distance(values.begin(),ip));
    if(values.size()%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
return 0;
}
