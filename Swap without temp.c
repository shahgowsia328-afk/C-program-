#include <stdio.h>
int main ()
{
   int a,b, temp;
   printf("enter the number to be swapped:\n");
   scanf("%d %d", &a,&b);
   a= a+b;
   b=a-b;
   a=a-b;
   printf("the numbers before swapping are: %d and %d\n", a,b);
   printf("the numbers after swapping are: %d and %d", b,a);
   
    return 0;
}
