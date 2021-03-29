#include <stdlib.h>;
#include <stdio.h>;

struct node //定義結構變數為node
{
    int data;
    struct node *next; //定義結構變數node裡面的新的結構指標變數 就是在結構變數裡 在宣告一個結構指標變數
};

typedef struct node data; //定義結構node為資料型態data

//form 2

typedef struct node
{
    int data;
    struct node *next;

} data;

int main()
{

    return 0;
}