#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d/(%d*%d)+\b=%d",i,i,i,i/(i*i));
    getch();
}
