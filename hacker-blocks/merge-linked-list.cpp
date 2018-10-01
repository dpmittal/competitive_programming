#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class ll
{
    node *head;
    public:
    ll()
    {
        head = NULL;
    }

    void insert(int val)
    {
        node *x = new node;
        x->data = val;
        if (head == NULL)
        {
            head = x;
        }
        else{
            x->next = head;
            head = x;
        }
    }
};

node *merge(node *a, node *b){
    if(a == NULL){
        return b;
    }

    if(b == NULL){
        return a;
    }

    node* c;
    if(a->data < b->data){
        node *c = a;
        c->next = merge(a->next, b);
    }

    else{
        c = b;
        c->next = merge(a, b->next);
    }

    return c;
}

int main()
{
    ll h1, h2; 
    
    h1.insert(7);
    h1.insert(5);
    h1.insert(3);
    h1.insert(1);

    h2.insert(16);
    h2.insert(15);
    h2.insert(12);
    h2.insert(6);
    h2.insert(2);
    return 0;
}