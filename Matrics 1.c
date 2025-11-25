#include<stdio.h>
int main()
{
    int a[10][10];
    int m,n,i,j;
    printf("enter the number of rows and columns\n");
    scanf("%d %d", &m,&n);
    printf("enter the elements of the matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("the matrix is:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}
