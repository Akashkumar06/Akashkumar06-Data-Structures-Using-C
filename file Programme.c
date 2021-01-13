#include<stdio.h>
main()
{
FILE *p;
int i;
p=fopen("abc.txt","w");
for(i=0;i<10;i++)
putw(i,p);
fclose(p);
printf("\n\nFile cointent :\n");
p=fopen("abc.txt","r");
while((i=getw(p)) !=EOF)
printf("%d\n",i);
fclose(p);
}



