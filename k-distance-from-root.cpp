/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void printKdistance(struct Node *root, int k) {
    if(!root)   return;
    if(k == 0)  cout << root->data << " ";
    printKdistance(root->left, k-1);
    printKdistance(root->right, k-1);
}
