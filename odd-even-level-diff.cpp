/*You are required to complete this function*/
void sum(Node* root, int level, int &res) {
    if(!root)   return;
    if(level&1)    res -= root->data;
    else    res += root->data;
    sum(root->left, level+1, res);
    sum(root->right, level+1, res);
}

int getLevelDiff(Node *root) {
    int level = 0, res = 0;
    sum(root, level, res);
    return res;
}

