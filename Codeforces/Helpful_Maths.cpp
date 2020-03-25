#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<char> values;
    string enter;
    cin>>enter;
    for(int i=0;i<enter.size();i++)
    if(enter[i]!='+')
    {
        values.push_back(enter[i]);
    }

    sort(values.begin(),values.end());
    for(int i=0;i<values.size();i++)
    {
        if(i!=values.size()-1)
        cout<<values[i]<<"+";
        else
        cout<<values[i];
    }

return 0;
}
