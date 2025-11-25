#include<stdio.h>
void main()
{
    int a[100], n,i;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("enter the value of elements\n");
    for (i=0;i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the elements of the array are\n");
    for (i=0;i<n; i++)
    {
        printf("%d ", a[i]);
    }
}
