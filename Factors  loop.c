#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number whose factors are to be calculated:\n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0 has infinitely many factors (or undefined).\n");
    }
    else
    {
        printf("Factors of %d are: ", n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
