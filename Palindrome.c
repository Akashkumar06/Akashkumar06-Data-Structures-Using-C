#include<stdio.h>
void main()
{
    int m, i,num,rev=0,rem=0;
    printf("Enter The num:");
    scanf("%d",&num);
     num=m;
    for(i=1;num>0;++i)
    {
        rem=num%10;
        rev=rev*10+rem;
         num=num/10;

    }


    if(m==rev)
        printf("%d is palindromic number!",num);

    else
        printf("%d is not palindromic number!",num);


}

