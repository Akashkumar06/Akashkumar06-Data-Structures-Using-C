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
    int j,temp,pass;
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
    for(pass=0;pass<n-1;pass++)
    {

        for(j=0;j<n-1-pass;j++)
        {
            if(arr[j]>arr[j+1])
               {

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
               }
         }


        printf("Pass %d :",pass+1);
        printArray(arr);
    }

    //print array
    printf("\n\n Array After Sorting : ");
    printArray(arr);
}

