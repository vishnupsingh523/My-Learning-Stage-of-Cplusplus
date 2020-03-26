#include<bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    vector<char> ans;
    cin>>word;

    int Anton=0,Danik=0;

    for(int i=0;i<word.size();i++)
    if(word[i]=='W'&&word[i+1]=='U' &&word[i+2]=='B')
    {
        word[i]=' ';
        word[i+1]=' ';
        word[i+2]=' ';
    }
    for(int i=0;i<word.size()-1;i++)
    {
        if(word[i]==' '&&word[i+1]==' ')
        {
            word.erase(word.begin()+i);
            i--;
        }
    }
    
    if(word[0]==' ')
    word.erase(word.begin());

    cout<<word;
    
}