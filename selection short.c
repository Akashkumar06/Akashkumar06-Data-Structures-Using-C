#include<stdio.h>
void selection(int[],int );
 main()
{
int i, a[10], n;
printf("Enter Array Size: ");
scanf("%d", &n);

printf("Enter elements: ");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
selection(a, n);
}
void selection(int a[],int n)
{
    int i;
    int j;
    int min;
    for(i=1;i<n-1;i++)
    {
        printf("pass:{%d}",i);
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;

            }
        }
     if(min!=i)
    {
            a[min]=a[i];
    }
    }
    printf("Sorted Array: ");
    for(i=0; i<n; i++)
        printf("%d\t",a[i]);

}


