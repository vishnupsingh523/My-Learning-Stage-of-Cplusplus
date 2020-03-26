#include<bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    int size;
    cin>>size;
    cin>>word;

    int Anton=0,Danik=0;

    for(int i=0;i<size;i++)
    if(word[i]=='A')
    Anton++;
    else
    Danik++;

    if(Anton>Danik)
    cout<<"Anton";
    else if(Anton<Danik)
    cout<<"Danik";
    else
    cout<<"Friendship";
    
}