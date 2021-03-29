#include <stdlib.h>
#include <stdio.h>

//印出串列結構

typedef struct node
{
    int data;
    struct node *next;
} data;

//data *listA;

void show_data(data *);

int main()
{
    data *previous, *current, *first;

    printf("enter the number of linked");
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        current = (data *)malloc(sizeof(data));
        printf("enter the data ");
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

    //show data
    show_data(first);

    printf("done\n");
    return 0;
}

void show_data(data *p)
{
    while (p != 0)
    {
        printf("address=%p  ", p);
        printf("data=%d  ", p->data);
        printf("next=%p  ", p->next);
        printf("\n");
        p = p->next;
    }
}
