
/* 

#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;

} data;
data *listA;

int main()
{
    int num;
    printf("enter the number: \n");
    scanf("%d", &num);

    data *previous, *current, *first;
    for (int i = 0; i < num; i++)
    {
        current = (data *)malloc(sizeof(data));
        printf("enter the data :\n");
        scanf("%d", &current->data);

        if (i == 0)
        {
            first = current;
        }
        else
        {
            previous->next = current;
        }
        current->next = NULL;
        previous = current;
    }
    current = first;
    while (current != 0)
    {
        printf("address=%p", current);
        printf("\tdata=%d", current->data);
        printf("\tnext=%p\n", current->next);
        current = current->next;
    }

    printf("done\n");
    return 0;
}
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;

} data;
data *listA;

int main()
{
    int num;
    printf("enter the number: \n");
    scanf("%d", &num);

    data *previous, *current, *first;
    for (int i = 0; i < num; i++)
    {
        current = (data *)malloc(sizeof(data));
        printf("enter the data :\n");
        scanf("%d", &current->data);

        if (i == 0)
        {
            first = current;
        }
        else
        {
            previous->next = current;
        }
        current->next = NULL;
        previous = current;
    }
    current = first;
    while (current != 0)
    {

        //printf("address=%p", current);
        printf("\tdata=%d", current->data);
        //printf("\tnext=%p\n", current->next);
        current = current->next;
    }

    printf("done\n");
    return 0;
}