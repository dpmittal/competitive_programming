#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

//node constructor
node *newNode(int val)
{
    node *x = new node;
    x->data = val;
    x->left = x->right = NULL;
    return x;
}

//insert
node *insert(node *root, int data){
    //Base Case
    if(root == NULL){
        node *x = newNode(data);
        root = x;
        return root;
    }

    if(data <= root->data){
        root->left = insert(root->left, data);
    }

    else{
        root->right = insert(root->right, data);
    }

    return root;
}

node *buildBinarySearchTree(){
    int d;
    cin>>d;
    node *root = NULL;
    while(d!=-1){
        root = insert(root, d);
        cin>>d;
    }
    return root;
}
//insert end

//delete node
node *deleteNode(node *root, int data){
    //Base case- data not found
    if(root == NULL){
        return NULL;
    }
    if(data < root->data){
        root->left = deleteNode(root->left, data);
    }

    else if(data > root->data){
        root->right = deleteNode(root->right, data);        
    }

    else{
        //1. Node is leaf node
        if(root->left == NULL && root->right == NULL){
            delete(root);
            return NULL;
        }

        //2. Node has only one child either left or right
        //left child absent
        if(root->left == NULL && root->right != NULL){
            node *temp = root->right;
            delete(root);
            return temp;
        }

        //right child absent
        if(root->right == NULL && root->left != NULL){
            node *temp = root->left;
            delete(root);
            return temp;
        }

        else if(root->left != NULL && root->right != NULL){
            //find max in left substree
            node *temp = root->left;
            while(temp->right != NULL){
                temp = temp->right;
            }
            root->data = temp->data;
            root->right = deleteNode(root->left, root->data);
            return root;
        }
    }
    return root;
}
//delete end

//check if given tree is BST
bool isBst(node *root, int min, int max){
    //Base case
    if(root == NULL){
        return true;
    }

    if(min < root->data && root->data < max){
        return isBst(root->left, min, root->data)&&isBst(root->right, root->data, max);
    }
    return false;
}
//check if given tree is BST

//convert array to balanced BST
node *arrayToBst(int *a, int s, int e){
    if(s>e){
        return NULL;
    }

    int m =(s+e)/2;
    node *root = newNode(a[m]);
    root->left = arrayToBst(a,s,m-1);
    root->right = arrayToBst(a,m+1,e);
    return root;
}
//convert array to balanced BST end

//BST to linked list
pair<node*, node*> BSTtoLinkedList(node *root){
    //Base case
    pair<node*, node*> p;
    p.first = NULL;
    p.second = NULL;

    if(root==NULL){
        return p;
    }

    if(root->left==NULL && root->right==NULL){
        p.first = root;
        p.second = root;
        return p;
    }
}
//BST to linked list end

//traversals
void preorderTraverse(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ' ';
    preorderTraverse(root->left);
    preorderTraverse(root->right);
    return;
}

void postorderTraverse(node *root){
    if(root == NULL){
        return;
    }

    postorderTraverse(root->left);
    postorderTraverse(root->right);
    cout<<root->data<<" ";
}

void inorderTraverse(node *root){
    if(root == NULL){
        return;
    }

    inorderTraverse(root->left);
    cout<<root->data<<" ";
    inorderTraverse(root->right);
}
//traversals end

//find height
int findHeight(node *root){
    if(root == NULL){
        return 0;
    }

    else{
        int h1 = findHeight(root->left);
        int h2 = findHeight(root->right);
        return max(h1, h2) + 1;
    }
}
//find height end

//level order
void levelOrder(node *root){
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
//level order

int main()
{
    node *root = buildBinarySearchTree();
    levelOrder(root);
    cout<<'\n';

    return 0;
}