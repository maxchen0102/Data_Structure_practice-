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

void insert_node(data *p, int data);

data *find_address(data *list, int item);

void del_node(data *p, int del_data);

int main()
{

    //========建立串列part ========//
    int num;
    printf("enter the node number");
    scanf("%d", &num);
    data *listA; // 宣告listA
    listA = build_list(num);
    show(listA, num);

    //======搜尋part =======//
    /* 
    printf("'輸入你要找的資料的名字");
    int find_data;
    data *k;
    scanf("%d", &find_data);
    k = find_address(listA, find_data);
    printf("你的資料的address=%p\n", k);
    */

    //=========插入節點part============//
    /* 
    int insert_address, insert_data;
    printf("輸入你想要插入的位置的資料名稱：");
    scanf("%d", &insert_address);
    data *k_2;
    k_2 = find_address(listA, insert_address);
    printf("輸入你要插入的資料");
    scanf("%d", &insert_data);
    insert_node(k_2, insert_data);
    show(listA, list_num(listA));
    printf("%d\n", list_num(listA));
    */
    //===========刪除節點=======//

    /* 
    int del_data;
    printf("輸入你要刪除的資料");
    scanf("%d", &del_data);
    del_node(find_address(listA, del_data), del_data);
    show(listA, list_num(listA));
    */

    //=======印出節點數量part==========//
    /* 
    printf("%d\n", list_num(listA));
    printf("done\n");
    */
    //=========釋放記憶體空間part =========//

    /*
    list_free(listA);
    show(listA, num);
    */
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

data *find_address(data *p, int data)
{
    while (p != NULL)
    {
        if (p->data == data)
        {
            return p;
        }
        else
        {
            p = p->next;
        }
    }
}

void insert_node(data *p, int in_data)
{
    data *newnode; //   資料宣告 不等於開動態記憶體
    newnode = (data *)malloc(sizeof(data));

    newnode->data = in_data;
    newnode->next = p->next;
    p->next = newnode;
}

void del_node(data *p, int del_data)
{
    data *tem;
    tem = p;
    p->next = (p->next)->next;
    free(tem);
}