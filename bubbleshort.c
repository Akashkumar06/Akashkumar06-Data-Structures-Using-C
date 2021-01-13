#include<stdio.h>
void Bubble_Sort(int arr[], int n)
{
int i, j, temp;
for(i=0; i<=n-1; i++)
{
for(j=0; j<=n-i-2; j++)
{
if(arr[j]>arr[j+1])
{
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;

}
}
}
printf("Sorted Array: ");
for(i=0; i<n; i++)
printf("%d\t",arr[i]);

}
int main()
{
int i, arr[10], n;
printf("Enter Array Size: ");
scanf("%d", &n);

printf("Enter elements: ");
for(i=0; i<n; i++)
scanf("%d", &arr[i]);
Bubble_Sort(arr, n);
}

