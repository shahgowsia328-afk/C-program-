#include<stdio.h>
int main()
{
    int a[100], n,i;
    int sum =0;
    printf("enter the number of elements:\n");
    scanf("%d", &n);
    printf("enter the values of the array elements:\n");
    for (i=0;i<n;i++) //read array values
    {
        scanf ("%d", &a[i]);
    }
    printf("the sum of elements =\n ");
    for (i=0;i<n;i++) 
    {
        sum= sum + a[i];
    }
    printf("%d ", sum);
  return 0;
}
