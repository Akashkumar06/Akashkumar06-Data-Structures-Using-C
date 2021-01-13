//Bubble Sort
//To sort in ascending order:
//Compare the adjacent items and bubble up the largest towards right

#include<stdio.h>
#define size 5
void printArray(int a[])
{
    int i;
    for(i=0;i<size;i++)
        printf("\t%d",a[i]);
    printf("\n");
}
main()
{
    int a[size]={8, 7, 6, 5, 4};
    int pass,j,temp;

    printf("\n Array Before Sorting : ");
    printArray(a);
    printf("\n\n");

    //sorting logic
    for(pass=0;pass<size-1;pass++)
    {
        for(j=0;j<size-1-pass;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("Pass %d :",pass+1);
        printArray(a);
    }
    printf("\n\n\n Array After Sorting : ");
    printArray(a);
}
