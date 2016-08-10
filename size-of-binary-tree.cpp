/* Tree node structure  used in the program
 struct Node
 {
     int data;
     struct Node* left;
     struct Node* right;
}; */

/* Computes the number of nodes in a tree. */
int getSize(struct Node* root)
{
    if(!root)
        return 0;
    return getSize(root->left)+1+getSize(root->right);
}
