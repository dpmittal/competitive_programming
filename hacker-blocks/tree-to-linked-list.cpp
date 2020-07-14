#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *newNode(int data){
    node *x = new node;
    x->data=data;
    x->left=NULL;
    x->right=NULL;
    return x;
}

node *buildTree(){
    int d;
    cin>>d;
    
    if(d == -1){
        return NULL;
    }

    node *root = newNode(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void printLinkedList(node *head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->right;
    }
}

class LinkedList{
    public:
        node *head;
        node *tail;
};

LinkedList treeToLL(node *root){
    LinkedList l;
    if(root == NULL){
        l.head = l.tail = NULL;
        return l;
    }

    else if(root->left == NULL and root->right == NULL){
        l.head = l.tail = root;
    }

    else if(root->left != NULL and root->right == NULL){
        LinkedList left = treeToLL(root->left);
        left.tail->right = root;

        l.head = left.head;
        l.tail = root;
    }

    else if(root->left == NULL and root->right != NULL){
        LinkedList right = treeToLL(root->right);
        root->right = right.head;

        l.head = root;
        l.tail = right.tail;
    }

    else{
        LinkedList left = treeToLL(root->left);
        LinkedList right = treeToLL(root->right);

        left.tail->right = root;
        root->right = right.head;

        l.head = left.head;
        l.tail = right.tail;
    }

    return l;
}

int main(){
  node *root = NULL;
  root = buildTree();
  printLinkedList(treeToLL(root).head);
  return 0;
}