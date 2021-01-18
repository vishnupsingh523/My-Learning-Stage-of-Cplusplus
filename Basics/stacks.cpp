#include<iostream>

using namespace std;

class stack
{
    public:
    int capacity;
    int top;
    stack * array;
};

stack * createStack(int capacity)
{
    stack * s = new stack;

    if(!s)
        return NULL;
    
    s->capacity = capacity;
    s->top = -1;
    s->array = new stack;
}