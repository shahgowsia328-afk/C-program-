#include <stdio.h>

int main()
{
    int i = 0;
    char str[100];
    printf("Enter the string:\n");
    scanf("%s", str);   
    printf("The entered string is:\n");
    while (str[i] != '\0')   
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}
