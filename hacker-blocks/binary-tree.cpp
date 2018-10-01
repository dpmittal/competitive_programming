#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *newNode(int val)
{
    node *x = new node;
    x->data = val;
    x->left = x->right = NULL;
    return x;
}

node *buildBinaryTree()
{
    int d;
    cin >> d;

    //Base Case
    if (d == -1)
    {
        return NULL;
    }

    //Rec Case
    node *n = newNode(d);
    n->left = buildBinaryTree();
    n->right = buildBinaryTree();
    return n;
}

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

void printAtLevelK(node *root, int k){
    if(root == NULL || k < 1){
        return;
    }
    
    if(k == 1){
        cout<<root->data<<" ";
        return;
    }

    printAtLevelK(root->left, k-1);
    printAtLevelK(root->right, k-1);
}

void printAtAllLevels(node *root){
    int maxHeight = findHeight(root);
    for(int k = 1; k<=maxHeight;k++){
        printAtLevelK(root, k);
    }
}

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

node *buildLevelOrder(){
    queue<node*> q;
    cout<<"Enter root Data: ";
    int d;
    cin>>d;
    cout<<'\n';
    node *root = newNode(d);
    q.push(root);

    while(!q.empty()){
        node *v = q.front();
        q.pop();
        cout<<"Enter children of "<<v->data<<" ";
        int c1, c2;
        cin>>c1>>c2;
        cout<<'\n';
        if(c1 != -1){
            v->left = newNode(c1);
            q.push(v->left);
        }

        if(c2 != -1){
            v->right = newNode(c2);
            q.push(v->right);
        }
    }

    return root;
}

// node *replaceSum(node *root){
//     if(root == NULL){
//         return 0;
//     }

//     if(root->left == NULL && root->right == NULL){
//         return root;
//     }

//     int rightSum = 0;
//     int leftSum = 0;
//     int temp = root->data;

//     if(root->left != NULL){
//         leftSum = replaceSum(root->left)->data;
//     }

//     if(root->right != NULL){
//         rightSum = replaceSum(root->right)->data;
//     }
//     root->data = leftSum + rightSum + temp;
//     return root;
// }

void mirror(node *root){
    if(root == NULL){
        return;
    }

    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

class Pair{
    public:
        bool balance;
        int height;
};

Pair checkBalanced(node *root){
    Pair p;
    //base case
    if(root == NULL){
        p.balance = true;
        p.height = 0;
        return p;
    }

    //rec case
    Pair left = checkBalanced(root->left);
    Pair right = checkBalanced(root->right);

    if(left.balance && right.balance && abs(left.height - right.height) <= 1){
        p.balance = true;
    }

    else{
        p.balance = false;
    }

    p.height = max(left.height, right.height) + 1;
    return p;
}


//27.6.2018
pair<int, int> maxSubset(node *root){
    if(root == NULL){
        return make_pair(0,0);
    }

    pair<int, int> p,left,right;
    left = maxSubset(root->left);
    right = maxSubset(root->right);

    p.first = root->data + left.second + right.second;
    p.second = max(left.first, left.second) + max(right.first, right.second);

    return p;
}

pair<int, int> findDiameter(node *root){
    if(root == NULL){
        return make_pair(0,0);
    }

    pair<int, int> p,left,right;
    left = findDiameter(root->left);
    right = findDiameter(root->right);

    p.first = max(left.first,right.first)+1;
    p.second = max(left.second, max(right.second, left.first+right.first));

    return p;
}

void printRoot2Leaf(node *root, int *out, int j){
    if(root == NULL){
        return;
    }

    if(root->right == NULL && root->left == NULL){
        out[j] = root->data;
        for(int i=0;i<=j;i++){
            cout<<out[i]<<" ";
        }
        cout<<'\n';
        return;
    }

    out[j] = root->data;
    printRoot2Leaf(root->left, out, j+1);
    printRoot2Leaf(root->right, out, j+1);
}

int main()
{

    node *root = buildLevelOrder();

    // cout<<"Pre-order:\n";
    // preorderTraverse(root);
    // cout<<'\n';
    // cout<<'\n';


    // cout<<"Post-order:\n";
    // postorderTraverse(root);
    // cout<<'\n';
    // cout<<'\n';


    // cout<<"In-order:\n";
    // inorderTraverse(root);
    // cout<<'\n';
    // cout<<'\n';

    // cout<<"Level Order:\n";
    // printAtAllLevels(root);
    // cout<<'\n';
    // cout<<'\n';

    // cout<<"Level Order using queue:\n";
    // levelOrder(root);
    // cout<<'\n';

    // root = replaceSum(root);

    // cout<<"Level Order using queue:\n";
    // levelOrder(root);
    // cout<<'\n';

    // pair<int, int> ans = maxSubset(root);
    // cout<<max(ans.first, ans.second)<<'\n';

    // pair<int, int> ans = findDiameter(root);
    // cout<<ans.second<<'\n';

    int out[1000];
    printRoot2Leaf(root,out,0);

    return 0;
}