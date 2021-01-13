#include<iostream>
using namespace std;
int main()
{
int f1=0;
    int f2=1;
    int f3,n,i;
    printf("Enter The Number of terms:");
    scanf("%d",&n);
    cout<<" " <<f1,f2;
    for(i=0;i<n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        cout<<"%d",f3;

    }
    return 0;
}
