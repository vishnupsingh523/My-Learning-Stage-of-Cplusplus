#include<iostream>

using namespace std;

struct node
{
    int value;
    node* left;
    node* right;
};

node* create_Node(int a)
{
    node *first= new node;
    first->value = a;
    first->left = NULL;
    first->right= NULL;

}
int main()
{
    node *root = create_Node(1);
    root->left = create_Node(2);
    root->left->left = create_Node(4);

    root->right = create_Node(3);
    root->right->left = create_Node(5);
    
    return 0;
}