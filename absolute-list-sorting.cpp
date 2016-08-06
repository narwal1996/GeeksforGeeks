/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

void sortList(Node** head)
{
    Node *temp = *head, *temp1 = *head;
    temp = temp->next;
    while(temp)
    {
        if(temp->data < 0)
        {
            temp1->next = temp->next;
            temp->next = *head;
            *head = temp;
            temp = temp1->next;
        }
        else
        {
            temp1 = temp;
            temp = temp1->next;
        }
    }
}
