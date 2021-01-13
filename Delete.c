#include<stdio.h>
void insert(int[],int ,int ,int);
main()
{
int a[50];
int i,n,pos,val;
printf("Enter The Size Of The Array: ");
scanf("%d",&n);
printf("Enter The Element:\n");
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
printf("Enter The  Position:");
scanf("%d",&pos);
printf("Enter The  Value to be insert:");
scanf("%d",&val);
insert(a,n,pos,val);
}
void insert(int a[],int n,int pos,int val)
{


int i,j;
for(i=n-1;i>=pos-1;i--)
    {
    a[i+1]=a[i];
    }
 a[pos]=val;
printf("Now Elements Are:\n");
for(j=0;j<n+1;j++)
printf("%d \n",a[j]);
}



