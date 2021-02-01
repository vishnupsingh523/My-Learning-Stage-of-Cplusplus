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
 
#define sync ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct Trie{
    int isEndWord;
    struct Trie * child[26];

    Trie()
    {
        memset(child, 0, sizeof(child));
        int isEndWrod = 0;
    }
};

void insert(struct Trie * root, string str)
{
    struct Trie * start = root;
    for(int i=0;i<26;i++)
    {

    }
}
int main() {
    sync
    
    ll n;
    struct Trie * root = new Trie;
    while(n--){
        st str;
        cin>>str;
        insert(root, str)
    }
    
}