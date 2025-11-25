#include <stdio.h>
int main ()
{
    float x;
    printf("Enter the number:\n");
    scanf("%f", &x);

    if (x > 0) {
        printf("%f is positive", x);
    }
    else if (x < 0) {
        printf("%f is negative", x);
    }
    else {
        printf("Zero");
    }

    return 0;
}
