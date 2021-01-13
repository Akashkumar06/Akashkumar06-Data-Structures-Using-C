#include<stdio.h>
#define STUDENT 3
struct mark
{
    int roll,m1,m2,m3,termmark,total;
        char name[20];

}s[STUDENT];

main()
{
    float avg;
//int total;

    int i,sum;
 for(i=0;i<STUDENT;i++)

 {
  printf("Enter The student name,roll, marks of three sub and termmark of sutudent:%d",i+1);
 scanf("%s %d %d %d %d %d",&s[i].name,&s[i].roll,&s[i].m1,&s[i].m2,&s[i].m3,&s[i].termmark);

 }
 for(i=0;i<STUDENT;i++)

 { s[i].total=s[i].m1+s[i].m2+s[i].m3;
 sum=sum+s[i].total;


 }
 printf("STUDENT         TOTAL\n\n\n");

 for(i=0;i<STUDENT;i++)
 {

 printf("Student:%d         %d\n\n",i+1,s[i].total);
 }
 avg=sum/STUDENT;
 printf("The Average marks of all The Student=%f",avg);


}

