#include <stdio.h>
int main() {
    int n, i;
    float sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
    {
        sum = sum + 1.0 / (2 * i); 
    }   
    printf("\nTotal sum = %f\n", sum);
    return 0;
}
