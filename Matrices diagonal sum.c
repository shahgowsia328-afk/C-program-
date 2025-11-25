#include <stdio.h>

int main() {
    int a[10][10];
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

    // calculate the sum of diagonal elements
    if (m == n) {
        for (i = 0; i < m; i++) {
            sum += a[i][i];
        }
        printf("The sum of diagonal elements is %d\n", sum);
    } else {
        printf("Not a square matrix, so diagonal sum cannot be calculated.\n");
    }

    return 0;
}
