     #include<stdio.h>
     int main()
     {
         int m1,m2,m3,m4,m5,m6,total;
         float avg;
         char grade,result,name[20];

         printf("ENTER THE STUDENT NAME: ");
         scanf("%s",&name);

         printf("\n ENTER THE 6 MARKS: ");
         scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
         total=m1+m2+m3+m4+m5+m6;
          avg = total/6;
          if(avg>40)
          {
              result ='p';
               if (avg>75)
                grade='d';
                else if (avg>60 && avg<=75)
                grade='a';
               else if (avg>50&&avg<=60)
                grade='b';
               else
                grade='c';
          }
          else result='f';
           printf("\n\t*****BSEB 2019 INTERMEDIATE RESULT******");
        printf("\n\tStudent name : %s", name);
        printf("\n\t*****marks****");
        printf("\n\GEOGRAPHY-marks=%d",m1);
        printf("\n\HISTORY -marks=%d",m2);
        printf("\n\tPOLYTICAL SCIENCE-marks=%d",m3);
        printf("\n\tEnglish- 100 marks=%d",m4);
        printf("\n\tENGLISH -50marks=%d",m5);
        printf("\n\thindi-50marks=%d",m6);
        printf("\n\tAvarage marks : %f",avg);
        if (result=='p')
        printf("\n\tresult  : pass");
        else
            printf("\n\tresult  : faill");
        printf("\n\t grade  : %c",grade);
        return 0;

     }
