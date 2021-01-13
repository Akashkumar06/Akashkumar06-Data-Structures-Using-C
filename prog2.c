#include<stdio.h>
int main()
{
    int i=120;
    while(i>=1)
    {
        printf("%d\t",i);
        i=i%3;
    }
    return 0;
}
