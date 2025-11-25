#include <stdio.h>

int main() {
    int n, i;
    long long int x, sum;

    x = 2;    
    sum = 0; 

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum= sum+x;    
        x = x * x;   
    }

    printf("The sum of the series = %lld\n", sum);

    return 0;
}
