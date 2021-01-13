#include<stdio.h>
#define MAX 10
int Queue[MAX];
void Insert(int);
void Delete();
void Display();
int rear=-1,front=0;

void main()
{
    int val,ch;
    do
    {
        printf("\n*******MENU*******");
        printf("\n1. INSERT");
        printf("\n2. DELETE");
        printf("\n3. DISPLAY");
        printf("\n5. EXIT");
        printf("\n. Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter the number to be pushed int theQueue :");
                scanf("%d",&val);
                Insert(val);
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 4:
                printf("Exit of programme!");
                break;

        }
    }while(ch!=4);
}
void Insert(int val)
{
    if(rear==MAX -1)
        printf("\nQueue Overflow :Stack is Full");
    else
    {
        rear++;
       Queue[rear]=val;
       printf("Item %d inserted in the queue",val);
    }
}
void Delete()
{
    int item;
    if(front>rear)
        printf("\nQueue Underflow ;No items present in theQueue");
    else
    {   front=0;
        rear=-1;
        item=Queue[front];
        front++;
        printf("\n The item removed from theQueue is=%d",item);

    }
}
void Display()
{
    int i;
    if((front==0&&rear==-1)||(front>rear))
        printf("\nQueue IS empty");
    else
    {
        printf("\nItem in theQueue are :\n");
        for(i=rear;i>=front;i--)
            printf("%d ",Queue[i]);
    }
}



