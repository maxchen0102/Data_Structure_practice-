#include <stdio.h>
#include <stdlib.h>

/* 釋放動態記憶體空間
*/
typedef struct node
{
    int data;
    struct node *next;

} data;
void free_list(data *p);

int main()
{
    int number = 10;
    data *current, *previous, *head;
    for (int i = 0; i < number; i++)
    {
        current = (data *)malloc(sizeof(data));
        if (number == 0)
        {
            head = current;
        }
        else
        {
            previous->next = current;
        }

        current->next = NULL;
        previous = current;
    }

    return 0;
}

void free_list(data *p)
{
    data *tem;
    while (p != 0)
    {
        tem = p;
        p = p->next;
        free(tem);
    }
}