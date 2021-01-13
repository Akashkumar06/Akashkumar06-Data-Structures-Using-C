
#include<stdio.h>
     int main()
     {
         int a,b;
         printf("input 2 no:\n");
         scanf("%d%d",&a,&b);
         if(a==b)
            printf("a is equil to b");
        else if(a>b)
            printf("a is larger");
         else
            printf("b is larger");
            return 0;
     }
