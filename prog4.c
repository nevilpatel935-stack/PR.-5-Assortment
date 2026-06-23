#include <stdio.h>

int main()
{
    int row, col; 
	int	i, j, r, c;
    int a[20][20];
    int sum = 0;

    printf("Enter the array of row size: ");
    scanf("%d", &row);

    printf("Enter the array of column size: ");
    scanf("%d", &col);

    printf("\nEnter the array elements:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the row number: ");
    scanf("%d", &r);

    sum = 0;
    printf("Elements of row %d: ", r);

    for(j=0;j<col;j++)
    {
        printf("%d ", a[r][j]);
        sum += a[r][j];
    }

    printf("\nThe sum of row %d: %d\n", r, sum);

    printf("\nEnter the column number: ");
    scanf("%d", &c);

    sum = 0;
    printf("Elements of column %d: ", c);

    for(i = 0; i < row; i++)
    {
        printf("%d ", a[i][c]);
        sum += a[i][c];
    }

    printf("\nThe sum of column %d: %d\n", c, sum);
    return 0;
}
