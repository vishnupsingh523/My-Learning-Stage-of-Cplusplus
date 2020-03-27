#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    int team_A =0,team_B=0;
    cin>>size;
    vector<string> values;
    string str[size];

    for(int i=0;i<size;i++)
    {
        cin>>str[i];
        values.push_back(str[i]);
    }
    sort(values.begin(),values.end());
    vector<string>::iterator it;
    it= unique(values.begin(),values.end());
    values.resize(distance(values.begin(),it));
    for(int i=0;i<size;i++)
    {
        if(str[i]==values[0])
        team_A++;
        else
        team_B++;
    }
    if(team_A>team_B)
    cout<<values[0];
    else
    cout<<values[1];
    
}