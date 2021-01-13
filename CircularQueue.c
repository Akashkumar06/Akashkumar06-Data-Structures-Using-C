#include<stdio.h>
#define SIZE 10
int front=0,rear=-1;
int Queue[SIZE];
void Insert(int);
void Delete();
void Display();
 main()
{
    int i,val,ch,item;

    do{
    printf("\n***********MENU***************");
    printf("\n1.Insetion\n2.Deletation\n3.Display\n4.Exit\n");
    printf("\nEnter Your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("\nEnter The value to be inserted:");
                  scanf("%d",&val);
                  Insert(val);
                  break;
        case 2:Delete();
                break;
        case 3:Display();
                break;
        case 4:exit(0);
        break;
        default:printf("Choose a valid Status");
    }
  }while(ch!=4);

}
void Insert(int val)
{
    if(front==0&&rear==SIZE-1)
        printf("Stack is Over flow");
    else
{
    if(front==0&&rear==-1)
             rear=0;
         else if (rear==SIZE-1&&front!=0)
            rear=0;
              else
              {
                  rear++;

              }
              Queue[rear]=val;
              printf("Item Inserted!!!");

}
}

void Delete()
{
  int val;
    if(front==0&&rear==-1)
        printf("Underflow condition");
    else
    {
      val=Queue[front];
      if(front==rear)
        {
        front=0;
        rear=-1;
        }
     else if(front==SIZE-1)
            front=0;

        else
            front++;
    printf("Item Deleted Successfully!!");


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



