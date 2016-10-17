/* A binary tree node
struct Node
{
    int data;
    struct Node* left, * right;
}; */


// You are required to complete this function 
bool hasPathSum(Node *node, int sum) {
    if(!node)   return false;
    int a = node->data;
    if(!node->right && !node->left) {
        if(sum == a)    return true;
        else    return false;
    }
    
    if(hasPathSum(node->left, sum-a) || hasPathSum(node->right, sum-a))
        return true;
    return false;
}
