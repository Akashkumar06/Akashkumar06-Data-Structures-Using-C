#include<stdio.h>
void disp( int a)
{
    printf("%d",a);
}
 int main()
{
    int i=0;
    int arr[6];
    printf("Enter The Element Of Array:");
    for(i=0;i<6;i++)
    {


    scanf("%d",arr[i]);
    }
    for(i=0;i<6;i++)
    {
      disp(arr[i]);
    }
 return 0;
}
