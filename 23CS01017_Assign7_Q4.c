#include <stdio.h>
void rep(int arr[], int x, int c)
{
    if (x == (c - 1) || c == 0)
        return;

    if (arr[x + 1] < arr[x])
        arr[x + 1] = arr[x];
    rep(arr, ++x, c);
}
int main()
{
    int c;
    printf("Enter size of array : ");
    scanf("%d", &c);
    int arr[c];
    printf("Enter array: ");
    for (int i = 0; i < c; i++)
        scanf("%d", &arr[i]);
    rep(arr, 0, c);
    printf("Max element: %d", arr[c - 1]);
    return 0;
}