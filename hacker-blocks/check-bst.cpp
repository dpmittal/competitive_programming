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

bool checkBST(node *root, int min=INT_MIN, int max=INT_MAX){
    if(root == NULL){
        return true;
    }

    if(root->data > min and root->data < max and checkBST(root->left,min,root->data) and checkBST(root->right, root->data, max)){
        return true;
    }   
    return false;
}

int main()
{
    node *root = NULL;
    root = buildTree();
    checkBST(root) ? cout<<"YES\n" : cout<<"NO\n";
    return 0;
}