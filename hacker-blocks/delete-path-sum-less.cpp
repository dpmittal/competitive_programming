#include<bits/stdc++.h>
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

void levelOrder(node *root){
    if(root == NULL){
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

node *trimBST(node *root, int threshold){
    if(root == NULL){
        return NULL;
    }

    root->left = trimBST(root->left, threshold - root->data);
    root->right = trimBST(root->right, threshold - root->data);

    if(root->left == NULL and root->right == NULL){
        if(threshold - root->data > 0){
            delete(root);
            return NULL;
        }
    }

    return root;
}

int main(){
    int threshold;
    cin>>threshold;
    node *root = buildTree();
    root = trimBST(root, threshold);
    levelOrder(root);
    return 0;
}