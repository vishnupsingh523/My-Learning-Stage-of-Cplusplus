#include<bits/stdc++.h>
using namespace std;

int solve(string s)
{
    unordered_map<char, int> ump;
    int one=0, two=0;

    for(int i=0;i<s.size();i++)
    ump[s[i]]++;

    for(auto itr : ump)
    if(itr.second>=2)
    two++;
    else
    one++;

    return (one/2 + two);
}
int main()
{
    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        cout<<solve(str)<<"\n";
        
    }
    return 0;
}