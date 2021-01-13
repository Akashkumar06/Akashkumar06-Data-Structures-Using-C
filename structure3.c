#include<stdio.h>
void divison(double,double,double,double,double*,double*);

struct complex
{
    double re;
    double im;
}c1,c2;
main()
{
    double r,m,i;


    printf("Enter The Real and imeginary part of 1st real num:",i+1);
    scanf("%lf%lf",&c1.re,&c1   .im);
    printf("Enter The Real and imeginary part of 2nd real num:");
    scanf("%lf%lf",&c2.re,&c2.im);



       division(c1.re,c1.im,c2.re,c2.im,&r,&m);
       printf("\n\ndivision of two complex number=%lf+%lf i\n\n",r,m);
}
void division(double a,double b,double c,double d,double *fre, double *fim)
{
    *fre=((a*c)+(b*d))/((c*c)+(d*d));
    *fim=((b*c)-(a*b))/((c*c)+(d*d));
}



