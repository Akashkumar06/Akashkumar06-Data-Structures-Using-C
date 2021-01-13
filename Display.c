#include <stdio.h>
void display(int[], int);
main()
{
   int a[100];
   int i, n;
   printf("Enter The Size Of The Array: ");
   scanf("%d", &n);
   printf("Enter The %d Elements Of Array: ", n);
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   display(a, n);
}
void display(int a[], int n)
{
   int j;
   printf("The Elements Of Array Are:\n");
   for (j = 0; j < n; j++)
      printf("%d \n", a[j]);
}
