/*You are required to complete this method*/
int minDepth(Node *root) {
    if(!root)   return 0;
    if(!root->left && !root->right) return 1;
    else if(!root->left)    return 1+minDepth(root->right);
    else if(!root->right)    return 1+minDepth(root->left);
    return 1+min(minDepth(root->left), minDepth(root->right));
}
