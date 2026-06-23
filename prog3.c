#include <stdio.h>

int main()
{
    int size, i, j;
    int a[20][20];

    printf("Enter the array's row & column size : ");
    scanf("%d", &size);

    printf("\nEnter array elements:\n");

    for(i=0;i<size;i++)
    {
        for(j=0; j<size;j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n the transpose matrix of an array:\n");

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
