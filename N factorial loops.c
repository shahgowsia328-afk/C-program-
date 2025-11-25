include <stdio.h>
int main()
{
    int i, n, product;
    product = 1; // initialization

    printf("enter the number of series elements to be multuplied:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        product = product * i;
    }

    printf("the factorial of the given numbers is :%d ", product);
    return 0;
}
