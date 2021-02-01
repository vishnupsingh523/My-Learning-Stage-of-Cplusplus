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

struct TrieNode{
    char data;
    int isEndOfWord;
    struct TrieNode * child[26];
};

struct TrieNode * subNode(struct TrieNode * root, char c){
    if(root != NULL){
        for(int i=0;i<26;i++)
        if(root->child[i]->data == c)
        return root->child[i];
    }
}

struct TrieNode * insertInTrie(struct TrieNode * root, char * word){
    if( !*word)
    return NULL;
    if(!root){
        struct TrieNode * newNode = new TrieNode;
        newNode->data = *word;
        for(int i=0;i<26;i++)
            newNode->child[i] = NULL;
        if(!*(word+1))
            newNode->isEndOfWord = 1;
        else
            newNode->child[*word] = insertInTrie(newNode->child[*word],word+1);
        return newNode;
    }

    root->child[*word] = insertInTrie(root->child[*word], word+1);
    return root;
}

int searchInTrie(struct TrieNode * root, char * word){
    if(!root)
        return -1;
    if(!*word){
        if(root->isEndOfWord)
            return 1;
        else
            return -1;
    }
    
    if(root->data == *word)
        return searchInTrie(root->child[*word], word+1);
    else
        return -1;
}

int main() {
    sync
    
    ll n;
    struct TrieNode * root = new TrieNode;
    
    cin>>n;
    while(n--)
    {
        char word[5];
        gets(word);
        root = insertInTrie(root, word);
    }

    cin>>n;
    while(n--)
    {
        char word[5];
        gets(word);
        if(searchInTrie(root, word)==1)
        cout<<"\nWord is Found!!\n";
        else
        cout<<"\nWord is not found !!";

    
}