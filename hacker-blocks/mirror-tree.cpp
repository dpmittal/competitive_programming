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

void levelOrderPrint(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *v = q.front();
        if(v == NULL){
            cout<<'\n';
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{
            q.pop();
        
            cout<<v->data<<" ";

            if(v->left){
                q.push(v->left);
            }

            if(v->right){
                q.push(v->right);
            }
        }
    }
}

void mirrorTree(node *root){
    if(root == NULL){
        return;
    }

    swap(root->left, root->right);
    mirrorTree(root->left);
    mirrorTree(root->right);
    return;
}

int main(){
  node *root = NULL;
  root = buildTree();
  levelOrderPrint(root);
  cout<<"\n\n";
  mirrorTree(root);
  levelOrderPrint(root);
  cout<<"\n";
  return 0;
}