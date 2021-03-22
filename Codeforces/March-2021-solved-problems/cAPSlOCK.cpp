#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vll vector<long long>
#define ll long long
#define fl float
#define db double
#define st string

#define w(x) int x;cin>>x;while(x--)
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    
    st str;
    cin>>str;

    int count =0;
    int first =0;
    for(int i=0;i<str.size(); i++)
    {
        if(isupper(str[i]) && i==0)
        first++;
        else if(isupper(str[i]))
        count++;
    }

    if(first+count == str.size())
    {
        for(int i=0;i<str.size();i++)
        str[i]=tolower(str[i]);

        cout<<str;
    }
    else if( first ==0 && count==str.size()-1)
    {
        str[0]= toupper(str[0]);
        for(int i=1;i<str.size();i++)
        str[i]=tolower(str[i]);

        cout<<str;
    }
    else
    cout<<str;
}