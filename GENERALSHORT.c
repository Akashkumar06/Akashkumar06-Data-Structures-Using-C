//Selection Sort
//To sort in ascending order:
//comprate the adjacent item and buble upthe largest towards righy

#include<stdio.h>
#define n 5
void printArray(int arr[])
{
    int i;
    for(i=0;i<n;i++)
        printf("\t%d",arr[i]);
    printf("\n");
}
main()
{
    int arr[n];
    int i, j,temp,pass;
for(j=0;j<n;j++)
{
    printf("enter element %d:",j+1);
    scanf("%d",&arr[j]);
}
    //print array
    printf("\n Array Before Sorting : ");
    printArray(arr);
    printf("\n\n");

    //sorting logic
    for(i=0;i++<n-1;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
               {

                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
               }
         }


        printf("Pass %d :",pass+1);
        printArray(arr);
    }

    //print array
    printf("\n\n Array After Sorting : ");
    printArray(arr);
}

