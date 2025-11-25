#include<stdio.h>
int main()
{
    int i,n,z;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        for (z=1;z<=5;z++)
        {
            printf ("%d ",z);
        }
        printf("\t");
    }
    return 0;
}
