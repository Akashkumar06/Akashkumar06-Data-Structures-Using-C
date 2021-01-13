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
            newnode->next=NULL;
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
    printf("list is Empty:");
       return;
   }
   printf("linked List Elements are");
   for(ptr=start;ptr!=NULL;ptr=ptr->next)
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
  while(curr->next!=NULL)
      curr=curr->next;
    newnode->info=item;
    newnode->next=NULL;
    curr->next=newnode;
    printf("Successfully Node insrted At End!");
}
void insertionBeforeNode()
{
  struct node *newnode,*curr,*Prev;
    int item,previousData;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
    {
        printf("memory is not avilable");
        exit(0);
    }

    printf("Enter The item / data before which you wnats to insert the node:");
    scanf("%d",&previousData);
    printf("Enter  the value you want to be insert");
    scanf("%d",&item);
    curr=start;
     while(curr!=NULL&&curr->info!=previousData)
    {    Prev=curr;
        curr=curr->next;
    }
    if(curr==NULL)
          printf("The item not presnt");
    else
    {

        newnode->info=item;
        newnode->next=Prev->next;
        Prev->next=newnode;

        printf("Successfully Node insrted!!!");
    }
}

void insertionAfterNode()
{
  struct node *newnode,*curr,*Prev;
    int item,previousData;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
    {
        printf("memory is not avilable");
        exit(0);
    }

    printf("Enter The item / data after which you wnats to insert the node:");
    scanf("%d",&previousData);
    printf("Enter  the value you want to be insert");
    scanf("%d",&item);
    curr=start;
     while(curr!=NULL&&curr->info!=previousData)
    {    Prev=curr;
        curr=curr->next;
    }
    if(curr==NULL)
          printf("The item not presnt");
    else
    {

        newnode->info=item;
        newnode->next=curr->next;
        curr->next=newnode;

        printf("Successfully Node insrted!!!");
    }
}
void deleteBeg()
{
    struct node *curr;
    if(start==NULL)
    {
        printf("List is empty");
        return;
    }
    curr=start;
    start=curr->next;
    free(curr);
    printf("Deleted 1st node");
}
void deleteEnd()
{
    struct node *curr,*pre;
    if(start==NULL)
    {
        printf("List is empty");
        return;
    }
    if(start->next==NULL)
    {
      start=NULL;
        return;
    }
    curr=start;
    while(curr->next!=NULL)
    {
        pre=curr;
        curr=curr->next;
     }
     pre->next=NULL;
    free(curr);
    printf("Deleted last node");
}
void deleteAfterNode()
{
    struct node *curr,*pre;
    int previousitem;
    if(start==NULL)
    {
        printf("List is empty");
        return;
    }
    curr=start;
    printf("Enter the data After which delation takeplace");
    scanf("%d",&previousitem);
    while(curr->next!=NULL&&previousitem!=curr->info)
    {
        pre=curr;
        curr=curr->next;
     }
     pre=curr;
        curr=curr->next;
    if(curr==NULL)
         {
             printf("Item not present in list:");
               return;
         }
    pre->next=curr->next;
    free(curr);
    printf(" node succesfully Deleted ");
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
           case 3:insertionBeforeNode();
                break;
           case 4:insertionAfterNode();
                  break;
           case 5:deleteBeg();
                 break;
           case 6:deleteEnd();
                break;
           case 7:deleteAfterNode();
                     break;
           case 8:traverse();
                    break;
           case 9:exit(0);
           default :
                printf("Enter a valid choise:");

       }
    }while(ch!=9);
}

