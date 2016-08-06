/* The structure of the Linked list Node is as follows:
struct node {
    int val;
    struct node* next;
}; */

void intersection(struct node **head1, struct node **head2, struct node **head3)
{
    node p;
    node *tail = &p;
    p.next = NULL;
    while(*head1 != NULL && *head2 != NULL)
    {
        if((*head1)->val == (*head2)->val)
        {
            node *temp = new node;
            temp->val = (*head1)->val;
            temp->next = tail->next;
            tail->next = temp;
            tail = tail->next;
            (*head1) = (*head1)->next;
            (*head2) = (*head2)->next;
        }
        else if ((*head1)->val < (*head2)->val) /* advance the smaller list */     
            (*head1) = (*head1)->next;
        else
            (*head2) = (*head2)->next;
    }
    *head3 = p.next;
}
