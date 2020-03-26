#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cin>>size;
    string word;
    cin>>word;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    if(size>=26)
    {
        int count=0;
        for(int i=0;i<word.size();i++)
        word[i]=tolower(word[i]);

    sort(word.begin(),word.end());
    string::iterator it;
    it=unique(word.begin(),word.end());
    word.resize(distance(word.begin(),it));
    
    if(word==alphabet)
    cout<<"YES";
    else
    cout<<"NO";
    
    }
    else
        cout<<"NO";
    

}