/*  Tree node
struct Node
{
    int data;
    struct Node* left, * right;
}; */

int sum(Node *root)
{
    if(!root)
        return 0;
    return sum(root->left) + sum(root->right) + root->data;
}

// Should return true if tree is Sum Tree, else false
bool isSumTree(Node* root)
{
    int ls, rs;
    if(!root || (!root->left && !root->right))
        return true;
    ls = sum(root->left);
    rs = sum(root->right);
    if(root->data == ls+rs && isSumTree(root->left) && isSumTree(root->right))
        return true;
    return false;
}
