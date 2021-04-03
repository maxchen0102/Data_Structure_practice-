
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

data *search(struct node *p, int item); //印出串列值

void insert_data_function(struct node *p, int data); //插入串列

data *delete_data_function(struct node *head, struct node *position); //刪除串列

int main()
{
    data *previous, *current, *first;

    printf("enter the number of linked");
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        current = (data *)malloc(sizeof(data)); //開記憶體空間
        printf("enter the data ");
        scanf("%d", &current->data); //輸入串列數量

        if (i == 0)
        {
            first = current; //首節點設定
        }
        else
        {
            previous->next = current;
        }
        current->next = NULL; //節點接地
        previous = current;
    }

    //show data
    show_data(first);

    //search data

    int item;
    printf("enter your insert data position   ");
    scanf("%d", &item);

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

    delete_data_function(first, del_data_address);
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
        if (p->data == item) // p==item p為此資料的位置 p->next回傳p 這個p是資料位置的上一個節點位址
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
    newnode->next = p->next; // 插在我們要的資料的位置後段
    /*
    if 要插在我們要的資料前端   p 要是我們原本的資料位置的前一個  在serch function 中 (p->next)->data==item 時回傳此p
     然後在此函式 
     newnode->data =item ; 
    newnode->next=p->next; 
     p->next=newnode; 
   
    
        */

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

        /* 
        if p 欲刪除的資料的前一個節點 
        tem=p->next; 
        p->next=(p->next)->next; //因為p->next不是原本的 所以用個tem去指向原本的p->next 好讓最後的記憶體動作運行 
        free(tem)
        */
    }
    free(position);
    return head;
}