#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
}*start;
void createList()
{
    struct node *newNode, *curr;
    int i, item;
    printf("You have to enter 3 items for the initial linked list.\n");
    for(i=0;i<3;i++)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter item: ");
        scanf("%d",&item);
        newNode->val=item;
        newNode->next=NULL;
        if(start==NULL)
            start=newNode;
        else
            curr->next=newNode;
        curr=newNode;
    }
}
void insertAtBeginning()
{
    struct node *newNode, *curr;
    int item;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("Memory FULL!");
        exit(0);
    }
    printf("Enter item: ");
    scanf("%d",&item);
    newNode->val=item;
    newNode->next=start;
    start=newNode;
}
void insertAtEnd()
{
    struct node *newNode, *curr;
    int item;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("Memory FULL!");
        exit(0);
    }
    printf("Enter item: ");
    scanf("%d",&item);
    curr=start;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    newNode->val=item;
    newNode->next=NULL;
    curr->next=newNode;
}
void insertBeforeAnElement()
{

}
void insertAfterAnElement()
{
    struct node *newNode, *curr;
    int item, previousItem;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("Memory FULL!");
        exit(0);
    }
    printf("Enter item: ");
    scanf("%d",&item);
    printf("Enter element after which item is to be inserted: ");
    scanf("%d",&previousItem);
    curr=start;
    while(curr!=NULL&&curr->val!=previousItem)
    {
        curr=curr->next;
    }
    if(curr==NULL)
        printf("Element not present in Linked List!");
    else
    {
        newNode->val=item;
        newNode->next=curr->next;
        curr->next=newNode;
    }
}
void display()
{
    struct node *ptr;
    if(start==NULL)
        printf("Linked List is empty!");
    else
    {
        printf("Current Linked List is:\n");
        for(ptr=start;ptr!=NULL;ptr=ptr->next)
            printf("%d\t",ptr->val);
    }
}
int main()
{
    int choice;
    createList();

    do
    {
        printf("\n********Linked List Menu********\n");
        printf("1. Insert item at the beginning\n");
        printf("2. Insert item at the end\n");
        printf("3. Insert item before a specific item\n");
        printf("4. Insert item after a specefic item\n");
        printf("5. Display linked list\n");
        printf("6. Exit\n");
        printf("Enter your command: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insertAtBeginning();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                insertBeforeAnElement();
                break;
            case 4:
                insertAfterAnElement();
                break;
            case 5:
                display();
                break;
            default:
                if(choice!=6)
                    printf("Invalid choice!");
                else
                    printf("Thank you for using our services.");
        }
    }while(choice!=6);
    return 0;
}


