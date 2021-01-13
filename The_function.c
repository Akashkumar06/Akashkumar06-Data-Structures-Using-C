#include<stdio.h>
void INSERTIONSORT(int a[], int n)
{
    int i,j,key;
    for(j=2;i<n;j++)
    {
          key=a[j];
          i=j-1;
          while(i>0&&a[i]>key)
            {
              a[i+1]=a[i];
               i--;

            }
          a[i+1]=key;

    }
}
main()
{
    int a[5]={0,50,20,40,30};
    int i,n=4;

    printf("Elements before sorting:\n");
    for(i=1;i<=n;i++)
        printf("%d\t",a[i]);
    INSERTIONSORT(a,n);
    printf("\nElements after sorting:\n");
    for(i=1;i<=n;i++)
        printf("%d\t",a[i]);

}



