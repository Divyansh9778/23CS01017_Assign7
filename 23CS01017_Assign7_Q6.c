#include <stdio.h>
#include <string.h>
int main()
{
    char x[100], sub_x[100];
    printf("Enter a string: ");
    gets(x);
    printf("Enter the substring to be searched: ");
    gets(sub_x);
    if (strstr(x, sub_x) != '\0')
        printf("The substring exists in string");
    else
        printf("The substring doesn't exist in string");
    return 0;
}

// for (int i = 0; i < strlen(x); i++)
//         if (sub_x[0] == x[i])
//         {
//             sub_new[0] = sub_x[0];
//             for (int j = 1; j < strlen(sub_x); j++)
//                 if (sub_x[j] == x[i + j])
//                     sub_new[j] = sub_x[j];

//             sub_new[strlen(sub_x)] = '\0';
//         }
//     if (strcmp(sub_x, sub_new) == 0)
//         printf("The substring exists in string");
//     else
//         printf("The substring doesn't exist in string");