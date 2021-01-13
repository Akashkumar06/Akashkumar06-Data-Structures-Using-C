#include<stdio.h>
int a[100];
int key;


int binarysearch(int beginindex,int endindex)
{
    int midindex;
    midindex=(beginindex+endindex)/2;
    if(beginindex>endindex)
        return -1;
    else if(a[midindex]==key)
        return midindex;
        else if(key>a[midindex])
            binarysearch(midindex+1,endindex);
        else
            binarysearch(beginindex,midindex-1);
}


main()
{

int n,i;
int found;
printf("Size:");
scanf("%d",&n);
printf("Enter elements: ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter The Element To Search:");
scanf("%d",&key);
found=binarysearch(0,n-1);
if(found==-1)

    printf("item not Found");
else

    printf("item found on index %d",found);
}



