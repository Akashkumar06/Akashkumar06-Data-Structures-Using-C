#include<stdio.h>
int main()
{
    int A[50], B[50],m,n, i, k, C[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &m);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<m; i++)
    {
        scanf("%d", &A[i]);
        C[i] = A[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &n);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &B[i]);
        C[k] = B[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d ", C[i]);

    return 0;
}
