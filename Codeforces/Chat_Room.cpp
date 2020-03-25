#include<bits/stdc++.h>

using namespace std;

int main()
{
    string enter,helo;
    cin>>enter;
    for(int i=0;i<enter.size();i++)
    if(enter[i]=='h'||enter[i]=='e'||enter[i]=='l'||enter[i]=='o'){}
    else
    enter.erase(enter.begin()+i);
    
    string::iterator it;
    it=unique(enter.begin(),enter.end());
    enter.resize(distance(enter.begin(),it));
    helo="helo";
    for(int i=0;i<enter.size();i++)
    if(enter[i]!=helo[i])
    {
        enter.erase(enter.begin()+i);
        i--;
    }
    if(enter=="helo")
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl<<enter;
}