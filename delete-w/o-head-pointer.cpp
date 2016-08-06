/* Link list node 
struct Node
{
    int data;
    Node* next;
}*/

// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
void deleteNode(Node *node)
{
    Node *temp = node->next;
    node->data = temp->data;
    node->next = temp->next;
    delete temp;
}
