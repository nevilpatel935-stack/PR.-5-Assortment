#include <stdio.h>

int main()
{
    int j, i;

    printf("Enter the array size: ");
    scanf("%d", &j);

    int a[j];

    printf("Enter array elements:\n");
    for (i = 0; i < j; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Negative elements from an Array:");

    for (i = 0; i < j; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
