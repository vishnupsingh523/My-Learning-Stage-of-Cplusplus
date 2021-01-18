#include<iostream>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createnode(int data)
{
    node* root = new node;
    root->data=data;
    root->left= root->right = NULL;
    return root;
}
struct node* addnode(node* root,int value)
{
    if(root=NULL)
    root = createnode(value);
    else if(root->data <= value)
    return addnode(root->left,value);
    else 
    return addnode(root->right, value);
}

struct node* search(int a)


}
int main()
{
    node* root = NULL;
    root = addnode(root,20);
    root = addnode(root,40);
    root = addnode(root,1);
    root = addnode(root,19);
    root = addnode(root,12);

    cout<<"enter number to search in bst: ";
    int enter;
    cin>>enter;
    if()
    return 0;
}