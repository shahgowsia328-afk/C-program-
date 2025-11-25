//using Ternery operator
#include <stdio.h>
int main ()
{
 int x,y;
 printf("enter the two numbers:\n");
 scanf("%d %d", &x, &y);
 x>y? printf("%d is greater than %d",x,y); x>y?printf("%d is greater than %d", y,x);
   return 0;
}
