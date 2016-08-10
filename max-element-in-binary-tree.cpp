#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node* left, *right;
};
 
// A utility function to create a new node
node* newNode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int max_val(node *root)
{
    if(!root)
        return INT_MIN;
    if(!root->left && !root->right)
        return root->data;
    return max(root->data, max(max_val(root->left), max_val(root->right)));
}

int main(void)
{
    struct node*NewRoot=NULL;
    struct node *root = newNode(2);
    root->left        = newNode(7);
    root->right       = newNode(5);
    root->left->right = newNode(6);
    root->left->right->left=newNode(1);
    root->left->right->right=newNode(11);
    root->right->right=newNode(9);
    root->right->right->left=newNode(4);
 
    printf ("Maximum element is %d \n", max_val(root));
 
    return 0;
}
