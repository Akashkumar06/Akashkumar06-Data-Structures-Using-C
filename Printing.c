#include <stdio.h>
void disp( int ch)
{
   printf("\n%d", ch);
}
int main()
{  int x=0;
   int arr[6];

    for(x=0;x<3;x++)
    {
       printf("%d.Enter The Element Of Array:",x+1);
       scanf("%d",&arr[x]);
    }
   for ( x=0; x<3; x++)
   {
       /* I’m passing each element one by one using subscript*/
       disp (arr[x]);
   }

   return 0;
}
