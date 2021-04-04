

#include <stdlib.h>
#include <stdio.h> 

typedef struct stcstack 
{
    int data ; 
    struct stcstack *next; 
}stack; 

int push(stack  *s , int x ) ;
int pop(stack *s ,int *x );  

int main()
{
    stack s ; 
    for(int i=0;i<5;i++)
    {
        int x ; 
        printf("enter your data : "); 
        scanf("%d",&x); 
        push(&s,x ); 
    }
    
    
    int a[5]; 
    for(int i =0;i<5;i++)
    {
        pop(&s,&a[i]);
        printf("%d\t",a[i]); 
    }
    printf("\n");




    return 0  ; 
}

int push(stack *s , int x )
{
    stack *p ; 
    p=(stack *)malloc(sizeof(stack)); 
    p->data=x; // 是s的下一個節點
    p->next=s->next ;
    s->next=p; 
    return 1 ; 
}

int pop(stack *s , int *x )
{
    stack *p = s->next ; 
    if(p==NULL)
        return 0; 
    *x=p->data;
    s->next=p->next ;
    free(p);
    return 1 ;  

}