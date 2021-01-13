
#include<stdio.h>
void insertion_Sort(int a[], int n)
{
int i,j;
int temp;
for(i=1;i<=n-1;i++)
    {
      temp=a[i];
      j=i-1;
      while(j>=0&&a[j]>temp)
        {
          a[j+1]=a[j];
           j--;
        }
      a[j+1]=temp;
    }



printf("Sorted Array: ");
for(i=0; i<n; i++)
 printf("%d\t",a[i]);

}

int main()
{
int i, arr[50];
int n;
printf("Enter Array Size: ");
scanf("%d",&n);

printf("Enter %d Elements:",n);
for(i=0; i<n; i++)
scanf("%d",&arr[i]);
insertion_Sort(arr, n);
return 0;
}


