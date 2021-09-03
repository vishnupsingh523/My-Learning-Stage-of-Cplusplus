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
#define endl "\n"
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    sync
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    st word;
    cin>>word;

    st sample;
    cin>>sample;

    unordered_set<string> str;
    
    for(int i=0;i<word.size();i++)
    {
        st name = "";
        name = word.substr(i,word.size()-i) + word.substr(0,i);
        str.insert(name);
    }

    for(int i=0;i<sample.size();i=i+ word.size()+1)
    {
        if(str.find(sample.substr(i, i+word.size() )) != str.end())
        cout<<sample.substr(i, i+word.size());
    }
}