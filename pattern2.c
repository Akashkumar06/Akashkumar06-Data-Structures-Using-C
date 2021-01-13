/*A
  B B
  C C C
  D D D D
  E E E E E */

#include<stdio.h>
int main()
{
    int i,j;
    char input,alphabate = 'Z';
    printf("Enter A Carater:");
    scanf("%c",&input);

    for(i=1;i<=('Z'-input+1);++i)
    {
        for(j=1;j<=i;++j)
          {

              printf("%c",alphabate);
          }
          --alphabate;
          printf("\n");
    }
    return 0;
}
