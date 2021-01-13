#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int info;
    struct queueNode *next;

}*front, *rear;

createQueue()
{

    struct queue *newNode, *currentNode;
    int i, item;
    printf("Enter the initial Queue.\n");
    for(i=0;i<3;i++)
    {
        newNode = (struct queue*)malloc(sizeof(struct queue));
        printf("Enter item no. %d: ",i+1);
        scanf("%d",&item);
        newNode->info=item;
        newNode->next=NULL;
        if(front==NULL)
            front=newNode;
        else
            currentNode->next=newNode;
        currentNode=newNode;
        if(i==2)
            rear=newNode;
    }
}

void insert(int item)
{
    struct queue *newNode;
    newNode=(struct queue*) malloc(sizeof(struct queue));
    if(newNode==NULL)
        printf("Queue Overflow!");
    else
    {
        newNode->info=item;
        newNode->next=NULL;
        rear->next=newNode;
        rear=newNode;
        printf("Item inserted successfully!");
    }
}

void delete()
{
    struct queue *prevNode, *currNode;
    if(front==NULL)
        printf("Queue Underflow!");
    else if(front==rear)
    {
        front=rear=NULL;
        printf("Item deleted successfully!");
    }
    else
    {
        prevNode=front;
        currNode=front->next;
        front=currNode;
        free(prevNode);

        printf("Item deleted successfully!");
    }
}

void display()
{
    struct queue *ptr;
    if(front==NULL)
        printf("QUEUE UNDERFLOW!");
    else
    {
        printf("Current Queue is:\n");
        for(ptr=front; ptr->next!=NULL; ptr=ptr->next)
            printf("%d\t",ptr->info);
        printf("%d\t",ptr->info);
    }
}

int main()
{
    int choice, item;
    createQueue();
    do{
        printf("\n\n*****Queue Menu*****\n1. Insert\n2. Delete\n3. Display Queue\n4. Exit Program");
        printf("\nEnter your operation: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter element you want to insert to the Queue: ");
                scanf("%d",&item);
                insert(item);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
                if(choice!=4)
                    printf("Invalid Choice!");
        }
    }
    while(choice!=4);
}
