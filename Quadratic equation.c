#include <stdio.h>
#include <math.h>
int main ()
{
   int a,b,c,D;
   float r1,r2;
   printf("enter the values of a,b,c:\n");
   scanf("%d %d %d", &a,&b, &c);
   D= b*b-4*a*c;
   if (D>0) {
       r1=(-b+ sqrt(D))/(2*a*c);
       r2=(-b-sqrt(D))/(2*a*c);
       printf("the equation has two real roots: %f and %f", r1, r2);
   }
   else if (D==0) {
       r1= -b/(2*a);
       printf("the equation has only one real root: %f",r1);
   }
   else 
   printf("the equation has no real roots");
 
    return 0;
}
