void insertionAfterNode()
{
    struct node *newnode, *curr;
    int item, previousItem;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory FULL!");
        exit(0);
    }
    printf("Enter item: ");
    scanf("%d",&item);
    printf("Enter element after which item is to be inserted: ");
    scanf("%d",&previousItem);
    curr=start;
    while(curr!=NULL&&curr->info!=previousItem)
    {
        curr=curr->next;
    }
    if(curr==NULL)
        printf("Element not present in Linked List!");
    else
    {
        newnode->info=item;
        newnode->next=curr->next;
        curr->next=newnode;
    }
}
