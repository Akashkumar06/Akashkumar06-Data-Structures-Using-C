#include<stdio.h>

void Quick_sort(int a[],int beg,int end)
{
    int loc;
    if(beg<end)
    {
        partition(a,beg,end,loc);
        Quick_sort(a,beg,loc-1);
        Quick_sort(a,loc+1,end);

    }
}
void partition( int a[],int beg,int end,int loc )
{
    int left,right,flag=0;
    left=beg;
    right=end;
    loc=beg;
    int temp;
    while(flag==0)
    {
        while(a[loc] <=a[right]&&loc!=right)
        {
            right=right-1;

        }
        if(loc==right)
        {
        flag=1;
        }
        else
            if(a[loc]>a[right])
        {
            temp=a[loc];
            a[loc]=a[right];
            a[right]=temp;
            loc=right;
        }


        if(flag==0)
        {
            while(a[loc]>=a[left] && loc!=left)
            {
                left=left+1;

            }
            if(loc==left)
             flag=1;
             else
                if(a[loc]<a[left])
                {
                        temp=a[loc];
                        a[loc]=a[left];
                        a[left]=temp;
                        loc=left;
                }



        }
   }
}
int main(){
   int i, count, a[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&a[i]);

   Quick_sort(a,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",a[i]);

   return 0;
}

