#include <stdio.h>
#include <string.h>
int main()
{
    char x[100], y[100];
    printf("Input: ");
    gets(x);
    strcpy(y, strrev(x));
    if (strcmp(y, strrev(x)) == 0)
        printf("The string is a Palindrome");
    else
        printf("The string is not a Palindrome");
    return 0;
}