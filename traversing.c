
#include<stdio.h>

int del(int n,int a[], int x){
    int i,j;
    for(i=0;i<n;i++)
    if(a[i]==x)
    break;
    if(i<n)
    {
        n=n-1;
          for(j=i;j<n;j++)
            a[i]=a[i+1];
}

return n;
}


int main()
{
    int i=0;
    int n;
    int a[10];
    int x;
    printf("Enter Size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("%d.Enter The Element of Array:",i+1);
    scanf("%d",&a[i]);}

    printf("Enter the Element:");
    scanf("%d",&x);
    n=del(a,n,x);
       for(i=0;i<n;i++)
        printf("%d",a[i]);
       return 0;}
