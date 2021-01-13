
#include<stdio.h>

void insertion_short(int a[],int n);
int main()
{
    int i;
    int n;
    int arr[10];

    printf("Enter Size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            printf("%d.Enter The Element of Array:",i+1);
            scanf("%d",&arr[i]);
        }
    insertion_short(arr,n);
    printf("shorted Array is:\t");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
    return 0;
    }

void insertion_short(int arr[],int n)
{
    int i,j;
    int temp=0;
    for(i=0;i<n-1;i++)
    {
      for(j=i-1;j>=0;j--)
      {
          if(arr[j]>arr[j+1])
          {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
          else
            break;

      }
    }
}

