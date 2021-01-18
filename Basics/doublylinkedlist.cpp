#include<iostream>

using namespace std;

struct node
{
    int info;
    struct node *prev,*next;
};

struct node* start=NULL;

int main()
{
    struct node* n = new node;
    cout<<"Enter : ";
    int enter;
    cin>>enter;
    n->info=enter;
    n->next==NULL;
    n->prev=NULL;
}