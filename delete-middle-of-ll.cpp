/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
}; */

// Deletes middle of linked list and returns head of the modified list
struct Node* deleteMid(struct Node *head)
{
    if(head == NULL)
        return head;
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    if(head->next->next == NULL)
    {
        Node *temp = head->next;
        head->next = temp->next;
        delete temp;
        return head;
    }
    Node *p1 = head, *p2;
    p2 = head->next->next;
    while(p2 != NULL && p2->next != NULL)
    {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    Node *temp = p1->next;
    p1->next = temp->next;
    delete temp;
    return head;
}
