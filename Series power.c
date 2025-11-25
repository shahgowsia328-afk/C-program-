#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, z;
    printf("Enter the number of terms to be displayed:\n");
    scanf("%d", &n);

    printf("Series: ");
    for (i = 1; i <= n; i++)
    { 
        z = (int)pow(2, i);   
        printf("%d ", z);    
    }

    return 0;
}
