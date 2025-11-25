#include<stdio.h>
int main()
{
    int i,n,z;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (z=1;z<=i;z++)
        {
            printf ("%d ",i);
        }
        printf("\t");
    }
    return 0;
}
