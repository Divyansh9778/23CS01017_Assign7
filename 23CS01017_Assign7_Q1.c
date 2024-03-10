#include <stdio.h>
int main()
{
    char arr[100], x;
    int freq = 0;
    printf("Enter a string: ");
    gets(arr);
    printf("Enter a character: ");
    scanf("%c", &x);
    for (int i = 0; arr[i] != '\0'; ++i)
        if (x == arr[i])
            ++freq;
    printf("Frequency of %c is: %d", x, freq);
    return 0;
}