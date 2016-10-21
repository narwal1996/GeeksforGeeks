/* The structure of the binary tree is as follows
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/

/*You are required to complete this method*/
void traversal(Node *root, int level, set<int> &s) {
    if(!root)   return;
    if(!root->left && !root->right) {
        s.insert(level);
        return;
    }
    traversal(root->left, level+1, s);
    traversal(root->right, level+1, s);
}

bool check(Node *root) {
    if(!root || (!root->left && !root->right))
        return true;
    set<int> s;
    traversal(root, 0, s);
    if(s.size() == 1)   return true;
    return false;
}
