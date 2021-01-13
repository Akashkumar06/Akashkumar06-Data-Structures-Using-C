#include<stdio.h>
int main()
 {
    int num,i=2;
    printf("enter a num:");
    scanf("%d",&num);

    while(i<=num-1)
        {
            if(num%i==0)
              {printf("prime nam nahi h!\n");
        }i++;

        }
        if(i==num)
            printf("prime num h!\n");
 return 0;
 }
