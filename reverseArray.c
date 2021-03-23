#include <stdio.h>

int main()
{
    int n, i, temp;

    printf("how many Elemants you are Enter = ");
    scanf("%d", &n);

    int Arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }

    for (i = 0; i < n / 2; i++)
    {

        temp = Arr[i];
        Arr[i] = Arr[n - 1 - i];
        Arr[n - 1 - i] = temp;
    }

    printf("\nReverse Array Is\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }
    return 0;
}