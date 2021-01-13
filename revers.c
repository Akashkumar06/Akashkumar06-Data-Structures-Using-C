#include<stdio.h>
void main()
{
    int  i,num=0,rev=0,rem=0,n=0;
    printf("Enter The num:");
    scanf("%d",&num);
     n=num;
    for(i=1;num>0;++i)
    {
        rem=num%10;
        rev=rev*10+rem;
         num=num/10;



    }
     printf("rev=%d\n",rev);

    if (n == rev)
        printf("it is palindromic number");

    else
        printf("it is not palindromic number");



}
