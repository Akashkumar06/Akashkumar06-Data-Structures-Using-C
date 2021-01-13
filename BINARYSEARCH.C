#include<stdio.h>
 main()
{
    int key,n,i;
    int a[100];
    int mid,low,high,found=0;
    printf("Enter The Size of Element:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

         printf("Enter The  Element(in accending order) %d:",i+1);
    scanf("%d",&a[i]);
    }

    printf("Enter the key search element:");
    scanf("%d",&key);
  low=0;
high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
            {

              printf("found@ loc %d\n",mid+1);
              found=1;
              break;
            }
               if(a[mid]>key)
          high=mid-1;
        else
            low=mid+1;
    }

if(found==0)
    printf("item no found");
}

