#include<iostream>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};


node* newnode(int data)
{
    
    node* add=new node();
    add->data=data;
    add->right= add->left = NULL;
    return add;
}
node* addnode(int enter,node* ptr)
{

    if(ptr=NULL)
    {
        ptr = newnode(enter);
    }
    else if(enter<=ptr->data)
        {
            ptr->left=addnode(enter,ptr->left);
        }
        else
        {
            ptr->right=addnode(enter,ptr->right);
        }
    return ptr;
}

bool search(int data,node* ptr)
{
    if(ptr==NULL) return false;
    else if(ptr->data==data) return true;
    else if(ptr->data > data) return search(data,ptr->left);
    else return search(data,ptr->right);
}
int main()
{
    node* root=NULL;
    int size,enter;
    cout<<"enter size: ";
    cin>>size;
    while(size--)
    {
        cin>>enter;
        root=addnode(enter,root);
    }

    cout<<endl<<"Enter a number to search in BST : ";
    cin>>size;
    if(search(size,root)== true ) cout<<"Found";
    else cout<<"Not found";
    
}