
#include<stdio.h>
#include<stdlib.h>
struct node{
         int info;
         struct node *next;

}*start;
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
            newnode->next=start;
             if(start==NULL)
                start=newnode;
            else
                curr->next=newnode;
            curr=newnode;
   }
}
void traverse()
{
   struct node *ptr;
   if(start==NULL)
   {
       printf("list is Empty:");
       return;
   }
   printf("linked List Elements are");
   for(ptr=start;ptr->next!=start;ptr=ptr->next)
      printf("%d-->",ptr->info);

}
void insertionAtBeginning()
{
    struct node *newnode;
    int item;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory is not available:");
         exit(0);
    }

        printf("To insert at beginning ,enter info/data of node:");
        scanf("%d",&item);
        newnode->info=item;
        if(start!=NULL)
             newnode->next=start;
        start=newnode;

    printf("Successfully Node insrted At beginnig!");

}
void insertionAtEnd()
{
    struct node *newnode,*curr;
    int item;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory is not available:");
         exit(0);
    }
    printf("To insert at end,enter info/data of node:");
        scanf("%d",&item);
     curr=start;
  while(curr->next!=start)
      curr=curr->next;
    newnode->info=item;
    newnode->next=start;
    curr->next=newnode;
    printf("Successfully Node insrted At End!");
}
main()
{
    int ch;
    int value;
    createList();
    do
    {  printf("\n***********MENU FOR LIST OPERATION*************");
       printf("\n1.Insertion at Beginning\n2.Insertion at End\n3.insertion before a certain node\n4.Insertion after a cetain node");
       printf("\n5.Deletion at begning\n6.Deletion at End\n7.deletion after a certain node\n8.transverse\n9.exit\n");
       printf("Enter your choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:insertionAtBeginning();
                 break;
          case 2: insertionAtEnd();
                break;
            /*  case 3:insertionBeforeNode();
                break;
           case 4:insertionAfterNode();
                  break;
           case 5:deleteBeg();
                 break;
           case 6:deleteEnd();
                break;
           case 7:deleteAfterNode();
                     break;*/
           case 8:traverse();
                    break;
           case 9:exit(0);
           default :
                printf("Enter a valid choise:");

       }
    }while(ch!=9);
}


