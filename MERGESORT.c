#include<stdio.h>
void Merge_sort(int [],int ,int );
void  Merge(int [],int ,int ,int );
int main()
{
int i, a[100], n;
printf("Enter Array Size: ");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0; i<n; i++)
scanf("%d",&a[i]);
 Merge_sort(a,0,n-1);
printf("Sorted Array: ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}
void Merge_sort(int a[],int beg,int end)
{
    int mid;

    if(beg<end)
    {
    mid=(beg+end)/2;
    Merge_sort(a,beg,mid);
    Merge_sort(a,mid+1,end);
    Merge(a,beg,mid,end);
    }
}
void  Merge(int a[],int beg,int mid,int end)
{
   int i,j,k;
   i=beg;
   j=mid+1;
   int temp[100];
   int index;
   index=beg;
   while(i<=mid&&j<=end)
    {
     if(a[i]<a[j])
      {
        temp[index]=a[i];
        i=i+1;
      }
      else
      {
        temp[index]=a[j];
        j=j+1;
      }
      index=index+1;
    }
    if(i>mid)
    {
      while(j<=end)
      {
          temp[index]=a[j];
          j=j+1;
          index=index+1;

      }
    }
    else
    {
        while(i<=mid)
        {
            temp[index]=a[i];
            i=i+1;
            index=index+1;
        }
    }



   k=0;
    while(k<index)
    {
        a[k]=temp[k];
        k=k+1;
    }
}
