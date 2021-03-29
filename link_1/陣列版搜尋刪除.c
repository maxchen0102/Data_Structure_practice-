#include <stdio.h>
#include <stdlib.h>

void arrayInsert(int[], int n, int value, int data);
void show_array(int a[], int number);
void arraydelete(int array[], int number, int position);

int main()
{
    //建立array data
    int number;
    printf("enter array number ");
    scanf("%d", &number);
    int array[number];
    for (int i = 0; i < number; i++)
    {
        printf("enter array data");
        scanf("%d", &array[i]);
    }
    show_array(array, number);

    // insert part
    int position, value;

    printf("輸入你要插入的陣列位址");
    scanf("%d", &position);
    printf("輸入你陣列資料");
    scanf("%d", &value);
    arrayInsert(array, number, value, position);
    show_array(array, number);

    //delete part
    int position_1;
    printf("輸入你要刪除的陣列位址");
    scanf("%d", &position_1);
    arraydelete(array, number, position_1);
    show_array(array, number);

    return 0;
}

void arrayInsert(int array[], int n, int value, int position)
{
    for (int i = n - 1; i > position; i--)
    {
        array[i] = array[i - 1];
    }
    array[position] = value;
}

void show_array(int array[], int number)
{

    for (int i = 0; i < number; i++)
    {
        printf("array[%d]=%d\n", i, array[i]);
    }
}
void arraydelete(int array[], int n, int position)
{
    for (int i = position; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[n - 1] = 0;
}