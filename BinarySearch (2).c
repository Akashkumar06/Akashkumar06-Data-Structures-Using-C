
#include<stdio.h>
void binary(int[],int,int,int);
main()
{
    int x[10],i,size,val,pos,beg,end;
    printf("Enter Size Of Array: ");
    scanf("%d",&size);
    printf("Enter elements:\n");
    for(i=0;i<size;i++)
        scanf("%d",&x[i]);
    printf("Enter Value Of Element To Search: ");
    scanf("%d",&val);
    beg=0;
    end=size-1;
    binary(x,beg,end,val);
}
void binary(int x[],int beg,int end,int val)
{
    int i,mid,count=0;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if (x[mid]==val)
        {
            printf("Value Is At Index No. %d",mid);
            count=1;
        }
        if(val<x[mid])
            end=mid-1;
        else
            beg=mid+1;
    }
    if(count==0)
        printf("Value Not Found!");
}
