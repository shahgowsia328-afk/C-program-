#include <stdio.h>

int main()
{
    int i=0;
    char str[i];
    printf("Enter your name:\n");
    scanf("%s", str);   
    while (str[i] != '\0')   
    {
        i++;
    }
    printf("the lenth of your name is %d", i);
    return 0;
}
