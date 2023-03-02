#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   int struct node *next ;
}; top=NULL; //globel vairable 
int push(int x)
{
    struct node * t;
    t=(struct node*)malloc(sizeof (struct node));
    if (t==NULL)
    printf("stack is full\n");
    else{
        t->data = x;
        t->next = top;
        top =t;
    }  
}
int pop(){
    struct node t,int x=-1;
    if(top==NULL)
    printf("stack is Empty\n");
    else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
void display()
{struct node *p;
p=top;
while(p!NULL)
{
    printf("%d ",p->next);
    p=p->next;

}
printf("\n");

}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    printf("%d ",pop());
    return 0;
}

