#include<stdio.h>
int main()
{
    int n=0,rev=0,i;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    for(i=1 ; n>0;++i)
    {


    rev = rev*10+n%10;
    n=n/10;
     }

    if(n==rev)
        printf("%d is palindromic nber!",n);
    else
     printf("%d is not palindromic nber!",n);
}

