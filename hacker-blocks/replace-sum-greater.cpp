#include<bits/stdc++.h>
using namespace std;
struct node {
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

node *buildTree(int a[], int s, int e){
    if(s > e){
        return NULL;
    }

    int mid = (s+e)/2;
    node *root = newNode(a[mid]);
    root->left = buildTree(a, s, mid - 1);
    root->right = buildTree(a, mid+1, e);
    return root;
}

void preorderPrint(node *root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
    return;
}

void replaceWithGreaterNodes(node *root){
    static int sum=0;
    if(root == NULL){
        return;
    }

    replaceWithGreaterNodes(root->right);
    sum += root->data;
    root->data = sum;
    replaceWithGreaterNodes(root->left);
}

int main(){
    
    int n;
    cin>>n;
    int *a = new int[n];
    
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    node *root = NULL;
    root = buildTree(a, 0, n-1);
    replaceWithGreaterNodes(root);
    preorderPrint(root);
    cout<<"\n";
    return 0;
}