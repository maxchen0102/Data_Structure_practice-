
#include <stdio.h>
#include <stdlib.h>

#define max 5

typedef struct tagStack
{
    int item[max];

int top ;
}stack;

int isfull(stack *s); //push要判斷是否為滿 
int isempty(stack *s ); // pop 要判斷是否為空

int push(stack *s ,int data ); 
int pop(stack *s); 



int main()
{
    stack *s ; // 開指標變數 而這個變數是我們自己去訂的
    s->top=-1;  //-> 給指標變數去使用自己的儲存值 而非位址的 
    printf("%d\n",s->top);
    push(s,100); 
    pop(s); 

    return 0;
}

int pop(stack *s  )
{
    if(isempty(s))
    {
        return 0 ; 
    }
    else 
    {
        printf("%d",s->item[s->top]);
        s->top--;
        return 1 ; 
    }
}

int push(stack *s ,int data)
{
    if(isfull(s))
    {
        return 0; 
    }
    else
    {
        s->top=s->top+1; 
        s->item[s->top]=data ;
        return 1;
    }

}

int isfull(stack *s )
{
    if(s->top==max-1)
    {
        return 1; 
    }
    else 
    {
        return 0; 
    }
}

int isempty(stack *s )
{
    if(s->top==-1)
    {
        return 1 ; 
    }
    else
    {
        return 0 ; 
     }
}
