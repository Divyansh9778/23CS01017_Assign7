#include <stdio.h>
#include <string.h>
void recur(char x[], int a, int b)
{
    if (a == b)
        return;
    int temp = x[a];
    x[a] = x[b];
    x[b] = temp;
    recur(x, ++a, --b);
}

int main()
{
    char st[100];
    printf("Input: ");
    gets(st);
    recur(st, 0, strlen(st) - 1);
    printf("Output: %s", st);
    return 0;
}