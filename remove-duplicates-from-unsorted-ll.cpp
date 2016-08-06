/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/


Node *removeDuplicates(Node *root)
{
    Node *curr = root;
    Node *prev = NULL;
    map<int, bool> table;
    while(curr)
    {
        if(table[curr->data])
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            table[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
    return root;
}
