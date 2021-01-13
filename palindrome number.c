
#include<stdio.h>
int main()
{
    int n=151;
    int sum=0;
    int r,temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)

     printf("number is palindrome");


    else
        printf("no palindrome");
}
