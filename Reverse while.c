#include <stdio.h>
int main()
{
    int n, q, r, i;
    printf("Enter the three digit number to be reversed: ");
    scanf("%d", &n);
    q = n;                 
    while (q > 0)          
    {
        r = q % 10;         
        printf("%d", r);    
        q = q / 10;         
    }
    return 0;
}
