#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int a[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int specificRow;
    scanf("%d", &specificRow);

    for (int i = 0; i < column; i++)
    {
        printf("%d ", a[specificRow][i]);
    }

    return 0;
}