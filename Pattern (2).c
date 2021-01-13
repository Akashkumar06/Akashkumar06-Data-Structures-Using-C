 /* 1
   232
  34543
 4567654
567898765 */





#include<stdio.h>
int main()
{
    int c,num=1,row,space;


    space=19;

    for(row=1;row<=20;row++)
    {
        num=row;
        for(c=1;c<=space;c++)
        printf(" ");

        space--;

        for(c=1;c<=row;c++)
         {

            printf("%d",num);
            num++;
         }
         num=num-2;
         for(c=1;c<row;c++)
          {

            printf("%d",num);
         num--;
          }
       printf("\n");
    }
}
