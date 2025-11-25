#include <stdio.h>

int main() {
    int n,i,a,b,c;
    printf("enter the number of terms to be displayed:\n");
    scanf("%d",&n);
    a=0;
    b=1;
    if (n>=1) 
    printf("%d ", a);
    if (n>=2) 
    printf("%d ", b);
    for (i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}
