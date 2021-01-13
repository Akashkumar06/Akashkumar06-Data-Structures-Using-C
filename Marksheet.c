#include<stdio.h>
struct student{
char name[20];
int roll;
int m1,m2,m3,m4,m5;
 float avg;
};
void main()
{   struct student s[2];
    int i;
    float avg;
    for(i=0;i<2;i++){
    printf("Enter the Detail of student[%d]:",i+1);
    printf("\nEnter The name of student:");
    scanf("%s",&s[i].name);
    printf("Enter The Student Roll number ;");
    scanf("%d",&s[i].roll);
    printf("Marks in 5 sub:");
    scanf("%d%d%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
    }


// displaying The value
printf("\nHere The detail of students ");
 for(i=0;i<2;i++){
     printf("\nEnter The name of student: %s",s[i].name);
     printf("\nEnter The Student's Roll numberis %d",s[i].roll);
     printf("\nEnter The Student's Marks in 5 sub:%d\t%d\t%d\t%d\t%d\t",s[i].m1,s[i].m2,s[i].m3,s[i].m4,s[i].m5);




 }

 for(i=0;i<2;i++){
 s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m4)/5;
 if(avg>90)
    printf("\ngrade is  O");
  if(avg>80)
    printf("\ngrade is  E");
  if(avg>70)
    printf("\ngrade is  A");
  if(avg>60)
    printf("\ngrade is  B");
  if(avg>50)
    printf("\ngrade is  C");
 else
    printf("\nBACK LAGILA");


 }

return 0;

}
