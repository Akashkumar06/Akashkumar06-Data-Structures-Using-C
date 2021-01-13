
#include<stdio.h>
void  quicksort(int a[50],int left,int right)
{
    int i,j,pivot;
    int temp;
    if(left<right)
    {
        pivot=left;
        i=left;
        j=right;
         while(i<j)
         {
             while(a[i]<=a[pivot]&&i<left)
                i++;
                 while(a[j]>a[pivot])
                j--;
                if(i<j)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                }
             }



             temp=a[pivot];
                    a[pivot]=a[j];
                    a[j]=temp;
                    quicksort(a,left,j-1);
                    quicksort(a,j+1,right);
    }



}


int main(){
   int i, count, number[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
