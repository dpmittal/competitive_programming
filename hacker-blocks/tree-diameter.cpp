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

int height(node *root){
    if(root == NULL){
        return 0;
    }

    return 1 + max(height(root->left), height(root->right));
}

int diameter(node *root){
    if(root == NULL){
        return 0;
    }

    int op1 = height(root->left)  + height(root->right);
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1, max(op2, op3));
}

class myPair{
    public:
        int height;
        int diameter;
};

//Linear Time since Calculating height now takes O(1) time
myPair linearTimeDiameter(node *root){
    myPair p;
    if(root == NULL){
        p.diameter = 0;
        p.height = 0;
        return p;
    }
    myPair left = linearTimeDiameter(root->left);
    myPair right = linearTimeDiameter(root->right);
    
    int d1 = left.diameter;
    int d2 = right.diameter;

    int h1 = left.height;
    int h2 = right.height;

    p.diameter = max(h1+h2, max(d1, d2));
    p.height = max(h1, h2) + 1;
    return p;
}

int main(){
  node *root = NULL;
  root = buildTree();
  cout<<linearTimeDiameter(root).diameter<<"\n";
  return 0;
}