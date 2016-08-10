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

int diameter(node *root, int *height)
{
    int lh = 0, rh = 0, ld = 0, rd = 0;
    if(!root)
    {
        *height = 0;
        return 0;
    }
    
    ld = diameter(root->left, &lh);
    rd = diameter(root->right, &rh);
    
    *height = max(lh, rh) + 1;
    
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
    int height = 0;
    cout << diameter(root, &height);
	return 0;
}
