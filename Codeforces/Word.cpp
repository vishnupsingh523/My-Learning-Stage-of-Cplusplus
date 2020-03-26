#include<bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin>>word;

    int lower=0,upper=0;

    for(int i=0;i<word.size();i++)
    if(islower(word[i]))
    lower++;
    else
    upper++;

    if(lower>=upper)
    for(int i=0;i<word.size();i++)
    word[i]=tolower(word[i]);
    else
    for(int i=0;i<word.size();i++)
    word[i]=toupper(word[i]);
    
    cout<<word;
}