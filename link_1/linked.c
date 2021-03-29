

//=================================================
// 節點收尋＆插入節點
/* 
#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;

} data;
data *listA;

data *searchNode(data *first, int item);
void insertNode(data *node, int insertData); // node 為要插入的位址的data的位址 透過search去找到
// void showData(data *first);

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
//show data 

    // get the data address you want to insert
    int item;
    data *p;
    printf("enter number  you want to know:\n");
    scanf("%d", &item);

    p = searchNode(first, item);
    printf("the address of the data = %p\n", p);

    //enter insertdata

    int insertdata;
    printf("enter the data you want to insert \n:");
    scanf("%d", &insertdata);
    insertNode(p, insertdata);

 while (newnode != NULL)
    {
            printf("address=%p", newnode);
            printf("\tdata=%d", newnode->data);
            printf("\tnext=%p\n", newnode->next);
            newnode = newnode->next;
    }


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

void insertNode(data *node, int insertData)
{
    data *newnode;
    newnode = (data *)malloc(sizeof(data));
    newnode->data = insertData;
    newnode->next = node->next;
    node->next = newnode;
}

void showData(data *first) 
{
    data *newnode = first;
    if (newnode == NULL)
    {
        printf("list is empty \n");
    }
    else
    {
        while (newnode != NULL)
        {
            printf("address=%p", newnode);
            printf("\tdata=%d", newnode->data);
            printf("\tnext=%p\n", newnode->next);
            newnode = newnode->next;
        }
        printf("\n");
    }
}
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
