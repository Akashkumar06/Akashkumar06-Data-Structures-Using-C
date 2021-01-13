#include<stdio.h>
struct country
{

char counry[300],capital[300];
}c[300];
main()
{
    int i,n;

    printf("how many country you want to print:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d.Enter the country and crossponding capital ",i+1);
        scanf("%s %s",&c[i].counry,&c[i].capital);
    }
     printf("COUNTRY            CAPITAL\n\n\n");

      for(i=0;i<n;i++)
    {

        printf("%d.%s           %s\n\n",i+1,c[i].counry,c[i].capital);
    }


}
