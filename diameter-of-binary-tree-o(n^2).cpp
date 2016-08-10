#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node* left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int height(node *root)
{
    if(!root)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

int diameter(node *root)
{
    if(!root)
        return 0;
    
    int lh = height(root->left);
    int rh = height(root->right);
    
    int ld = diameter(root->left);
    int rd = diameter(root->right);
    
    return max(max(ld, rd), lh+rh+1);
}

int main() 
{
    node *root = new node(2);
    root->left        = new node(7);
    root->right       = new node(5);
    root->left->right = new node(6);
    root->left->right->left=new node(1);
    root->left->right->right=new node(11);
    root->right->right=new node(9);
    root->right->right->left=new node(4);
    cout << diameter(root);
	return 0;
}
