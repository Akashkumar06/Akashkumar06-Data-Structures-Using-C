#include<stdio.h>
void push(int[],int);
int main()
{  int item;
   int stack [5] ;
   printf("Item which you want to insert:");
   scanf("%d",&item);
}
void push(int stack[],int item)
{
    int top=-1;
    if(top==4)
    {
        printf("Over flow");
    }
    top++;
    stack[top]=item;
}
