#include <stdlib.h>

#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node data;

void show(data *p, int num);

data *build_list(int num);

int list_num(data *p);

void list_free(data *p);

int main()
{
    int num;
    printf("enter the node number");
    scanf("%d", &num);

    data *listA; // 宣告listA
    listA = build_list(num);

    show(listA, num);

    printf("%d\n", list_num(listA));
    printf("done\n");
    list_free(listA);
    show(listA, num);

    return 0;
}

void show(data *p, int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("address=%p\t", p);
        printf("data=%d\t", p->data);
        printf("next address=%p\t ", p->next);
        p = p->next;
        printf("\n");
    }
}

data *build_list(int num)
{

    data *pre, *p;
    data *list;
    for (int i = 0; i < num; i++)
    {
        p = (data *)malloc(sizeof(data));
        printf("enter data %d ", i + 1);
        scanf("%d", &p->data);
        if (i == 0)
        {
            list = p;
        }
        else
        {
            pre->next = p;
        }
        p->next = NULL;
        pre = p;
    }
    return list;
}

int list_num(data *p)
{
    int number = 0;
    while (p != NULL)
    {
        number++;
        p = p->next;
    }
    return number;
}

void list_free(data *p)
{
    data *tem;
    while (p != NULL)
    {
        tem = p;
        p = p->next;
        free(tem);
    }
}