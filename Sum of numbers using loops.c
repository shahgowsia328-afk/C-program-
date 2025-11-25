#include <stdio.h>
int main()
{
    int i, n, sum;
    sum = 0; // initialization

    printf("enter the number of series elements to be added:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("%d ", sum);
    return 0;
}
