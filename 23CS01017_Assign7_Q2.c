#include <stdio.h>
#include <string.h>
int main()
{
    char x[100], y[100];
    int temp = 0;
    printf("Input: ");
    gets(x);
    for (int i = 0; i < strlen(x); i++)
    {
        int a = x[i];
        if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
            y[temp++] = x[i];
    }

    y[temp] = '\0';
    printf("Output: %s", y);
    return 0;
}