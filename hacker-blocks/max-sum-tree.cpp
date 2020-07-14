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

class sumPair{
    public:
        int including;
        int excluding;
};

sumPair maxSum(node *root){
    sumPair p;
    if(root == NULL){
        p.including = 0;
        p.excluding = 0;
        return p;
    }

    sumPair left = maxSum(root->left);
    sumPair right = maxSum(root->right);
    p.including = root->data + left.excluding + right.excluding;
    p.excluding = max(left.including, left.excluding) + max(right.including, right.excluding);
    return p;
}

int main(){
  node *root = NULL;
  root = buildTree();
  cout<<max(maxSum(root).excluding,maxSum(root).including)<<"\n";
  return 0;
}