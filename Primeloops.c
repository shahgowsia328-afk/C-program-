#include <stdio.h>
int main()
{
    int i, n;
    int flag = 1;
  printf("Enter the number to be checked:\n");
  scanf("%d", &n);
  if (n <= 1)
    {
        printf("%d is not prime", n);
        return 0;
    }
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);
        
    return 0;
}
