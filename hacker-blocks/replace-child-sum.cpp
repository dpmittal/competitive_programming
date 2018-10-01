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
    if(root == NULL){
        cout<<-1<<"\n";
        return;
    }

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

int replaceWithSum(node *root){
    if(root == NULL){
        return 0;
    }

    if(root->left == NULL and root->right == NULL){
        int temp = root->data;
        root->data = 0;
        return temp;
    }

    int temp = root->data;
    root->data = replaceWithSum(root->left) + replaceWithSum(root->right);
    return root->data + temp;
}

int main(){

    node *root = NULL;
    root = buildTree();
    replaceWithSum(root);
    levelOrderPrint(root);
    return 0;
}