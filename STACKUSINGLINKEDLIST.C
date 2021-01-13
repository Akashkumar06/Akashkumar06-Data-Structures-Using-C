
#include<stdio.h>
#include<stdlib.h>
struct node{
         int info;
         struct node *next;

}*top;
void createList()
{
    struct node *newnode,*curr;
    int item,i,n;

    printf("Enter The size of list:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
          {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter %d element of list",i+1);
            scanf("%d",&item);

            newnode->info=item;
            newnode->next=NULL;
             if(top==NULL)
                top=newnode;
            else
                curr->next=newnode;
            curr=newnode;
   }
}
void Display()
{
   struct node *ptr;
   if(top==NULL)
   {
       printf("list is Empty:");
       return;
   }
   printf("linked List Elements are");
   for(ptr=top;ptr!=NULL;ptr=ptr->next)
      printf("%d-->",ptr->info);

}
void Push()
{
    struct node *newnode;
    int item;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory is not available:");
         exit(0);
    }

        printf("enter info/data of node:");
        scanf("%d",&item);
        newnode->info=item;
        if(top!=NULL)
             newnode->next=top;
        top=newnode;

    printf("Successfully Node insrted At beginnig!");

}
void Pop()
{
    struct node *curr;
    if(top==NULL)
    {

    printf("list is empty");
    return;
    }
    curr=top;
    top=curr->next;
    free(curr);
    printf("Deleted 1st node");

}

main()
{
    int ch;
    int value;
    createList();
    do
    {  printf("\n***********MENU FOR LIST OPERATION*************");
       printf("\n1.Push\n2.Pop\n3.transverse\n4.exit\n");
       printf("Enter your choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:Push();
                 break;
           case 2:Pop();
                break;

           case 3:Display();
                    break;
           case 4:exit(0);
           default :
                printf("Enter a valid choise:");

       }
    }while(ch!=4);
}


