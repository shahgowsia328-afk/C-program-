#include <stdio.h>

int main() {
    int a[10][10];
    int b[10][10];
    int m, n, i, j;
    int sum = 0;

    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    //calculate transpose 
     for (i = 0; i < m; i++) 
     {
        for (j = 0; j < n; j++) 
        {
            b[j][i]=a[i][j];
        }
     }
     printf("the transpose of the matrix is: \n");
     for (i = 0; i < n; i++) 
     {
        for (j = 0; j < m; j++) 
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
     }
  return 0;
}
