#include <stdio.h>

int main()
{
    int a[100], n, i, x;
    int flag = 0;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched:\n");
    scanf("%d", &x);

    for (i = 0; i < n; i++) 
    {
        if (x == a[i]) 
        {
            printf("Element found at position %d\n", i+1);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}
