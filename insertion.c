#include<stdio.h>

void insert(int[],int,int,int);
void main()
{
int ar[50],n,i,num,ins,poc;

printf("Enter number of elements:- ");
scanf("%d",&n);
printf("Enter elements in array:- ");
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}
printf("Enter element to insert:- ");
scanf("%d",&ins);
printf("Enter Position to insert:- ");
scanf("%d",&poc);
insert(ar,n,ins,poc);

}

void insert(int arr[],int x,int ins,int loc)
{
 int i;
 for(i=x-1;i>loc+1;i--)
  {
  arr[i+1]=arr[i];
  }
  arr[loc-1]=ins;
 printf("Array after inserting element is:-\n ");
 for(i=0;i<x+1;i++)
   {
    printf("%d\n",arr[i]);
   }
}
