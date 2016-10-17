/* A binary tree node
struct node
{
    int data;
    struct Node* left, * right;
}; */

/* Should return true if trees with roots as r1 and 
   r2 are identical */
bool isIdentical(Node *r1, Node *r2) {
    if(!r1 && !r2)  return true;
    if(!r1 || !r2)  return false;
    if(r1->data == r2->data && isIdentical(r1->left, r2->left) &&
        isIdentical(r1->right, r2->right))
        return true;
    return false;
}
