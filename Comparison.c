#include <stdio.h>
int main ()
{
    int x,y;
    printf("enter the two numbers to be compared:\n");
    scanf("%d %d" , &x, &y);
    if (x>y)
    printf("%d is greater than %d", x,y);
    else 
    printf("%d is greater than %d", y,x);
    return 0;
}
