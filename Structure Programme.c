#include<stdio.h>
struct emp
{  int eid;
    char name[50];
    float sal;


};
main()
{
    FILE *fp;
    struct emp e1;
    fp=fopen("employee.txt","r");
    printf("\n Employee Detail   :\n");
    fread(&e1,sizeof(e1),1,fp);
    printf("\n Employee ID:%d\n",&e1.eid);
    printf("\n Employee name: %s\n",e1.name);
     printf("\n Employee sal:%f\n",&e1.sal);
     fclose(fp);
}

