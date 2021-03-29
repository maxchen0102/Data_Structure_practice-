
/* 
輸入 搜尋 刪除節點
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;

} data;

//data *listA;

void show_data(data *);

data *search(struct node *p, int item);

void insert_data_function(struct node *p, int data);

data *delete_data_function(struct node *head, struct node *position);

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

    //search data

    int item;
    printf("enter your insert position  ");
    scanf("%d", &item);
    //printf("%p\n", search(first, item));

    printf("enter yourt data");
    int insert_data;
    scanf("%d", &insert_data);

    insert_data_function(search(first, item), insert_data);

    show_data(first);

    // delete data
    int delete_data;
    data *del_data_address;
    printf("enter data you wnat to delete ");
    scanf("%d", &delete_data);
    del_data_address = search(first, delete_data);

    delete (first, del_data_address);
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

data *search(struct node *p, int item)
{
    while (p != 0)
    {
        if (p->data == item)
        {
            return p;
        }
        else
        {
            p = p->next;
        }
    }
}

void insert_data_function(struct node *p, int item)
{
    data *newnode;
    newnode = (data *)malloc(sizeof(data));

    newnode->data = item;
    newnode->next = p->next;

    p->next = newnode;
}

data *delete_data_function(struct node *head, struct node *position)
{
    if (head == NULL)
    {
        printf("nothing ");
        return NULL;
    }
    if (head == position)
    {
        head = head->next;
    }
    else
    {
        while (head->next != position)
        {
            head = head->next;
        }
        head->next = position->next;
    }
    free(position);
    return head;
}