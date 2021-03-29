
//=================================================
//建立串列 並搜尋串列中元素之地址

#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;

} data;
data *listA;

data *searchNode(data *first, int item);

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
    printf("\n");

    int item;
    data *p;
    printf("enter number  you want to know:\n");
    scanf("%d", &item);

    p = searchNode(first, item);
    printf("%p\n", p);

    printf("done\n");
    return 0;
}

data *searchNode(data *first, int item)
{
    data *node = first;

    while (node != NULL)
    {
        if (node->data == item) // node->data是此node的data  node->next也是存放在此node的位址
        {
            return node;
        }
        else
        {
            node = node->next; // node->data是此node的data  node->next也是存放在此node的位址
                               //只是他存的是下一個node的位址
        }
    }
    return NULL;
}
