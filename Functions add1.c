//program in C to add two integers input by the user using functions
#include <stdio.h>

// Function declaration
int add(int a, int b);
int main() {
    int x, y, sum;
    printf("Enter the integers to be added: ");
    scanf("%d %d", &x, &y);

    // Calling the function
    sum = add(x,y);

    // Displaying the result
    printf("The sum is: %d\n", sum);

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}
