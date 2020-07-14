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

class myPair
{
  public:
    int height;
    bool isBalanced;
};

myPair isHeightBalanced(node *root)
{
    myPair p;
    if (root == NULL)
    {
        p.height = 0;
        p.isBalanced = true;
        return p;
    }

    myPair left = isHeightBalanced(root->left);
    myPair right = isHeightBalanced(root->right);

    int diff = abs(left.height - right.height);

    if (diff <= 1 and left.isBalanced and right.isBalanced)
    {
        p.isBalanced = true;
    }
    else
    {
        p.isBalanced = false;
    }

    p.height = max(left.height, right.height) + 1;
    return p;
}

int main()
{
    node *root = NULL;
    root = buildTree();
    isHeightBalanced(root).isBalanced ? cout<<"YES\n" : cout<<"NO\n";
    return 0;
}