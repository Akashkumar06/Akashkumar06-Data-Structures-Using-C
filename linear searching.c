
#include <stdio.h>
void search(int[],int,int);
int main()
{
  int array[100], key, i, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (i= 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search\n");
  scanf("%d", &key);
  search(array,n,key);
  return 0;
}
void search(int array[],int n,int key)
{
int i,found=0,pos;
  for (i = 0; i< n; i++)
  {
    if (array[i] == key)
    {
     found++;
     pos=i;
    }
  }
  if(found==1)
    printf("Element %d found at index %d",key,pos);
  else
    printf("Element Not Found");


 }

