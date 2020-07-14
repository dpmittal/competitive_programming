#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *newNode(int data)
{
    node *x = new node;
    x->data = data;
    x->left = NULL;
    x->right = NULL;
    return x;
}

node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    node *root = newNode(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int countCompleteNodes(node *root){
    if(root == NULL){
        return 0;
    }

    int count=0;
    if(root->left and root->right){
        count++;
    }
    
    count += countCompleteNodes(root->left) + countCompleteNodes(root->right);
    return count;
}

int main(){
    node *root = buildTree();
    cout<<countCompleteNodes(root)<<"\n";
    return 0;
}