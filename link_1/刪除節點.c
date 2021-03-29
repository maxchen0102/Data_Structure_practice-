typedef struct node
{

    int data;
    struct node *next;
} data;

data *delete (struct node *head, struct node *position)
{
    if (head == NULL)
    {
        printf("nothing ");
        return NULL;
    }
    if (head = position)
    {
        head = head->next;
    }
    else
    {
        while (head->next != position)
        {
            head = head->next; //
        }
        head->next = position->next;
    }
    free(position);
    return head;
}