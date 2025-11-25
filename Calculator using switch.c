//using switch
#include <stdio.h>
int main ()
{
 int i,x,y,z;
 printf("enter 1 for addition, 2 for subtraction, and 3 for multiplication: \n");
 scanf ("%d", &i);
 printf("enter the two  numbers:\n");
 scanf ("%d %d", &x, &y);
 switch(i) {
 case 1: 
 z=x+y;
 break;
 case 2: 
 z=x-y;
 break;
 case 3: 
 z=x*y;
 break;
 default:
 printf("You have entered an incorrect value");
 break;
 }
 printf("The answer is %d", z);
 
   return 0;
}
