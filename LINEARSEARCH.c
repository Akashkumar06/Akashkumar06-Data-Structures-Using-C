#include<stdio.h>
 main()
{
    int found=0,key,n,i;
    int a[100],pos;
    printf("Enter The Size of Element:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

         printf("Enter The  Element %d:",i+1);
    scanf("%d",&a[i]);
    }

    printf("Enter the key search element:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {

    if(a[i]==key)
    {
    pos=i;
    found=1;
    break;
    }
    }
 if(found==1)
        printf("Element is found on %d",pos+1);

 else
     printf("not found!");
}






