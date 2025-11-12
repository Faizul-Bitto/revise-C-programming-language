#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int A[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    bool isDiagonal = true;

    if (row == column) // check if square matrix
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if (i != j) // outside diagonal -> outside diagonal -> value must be 0
                {
                    if ((A[i][j]) != 0)
                    {
                        isDiagonal = false;

                        printf("This is not a primary diagonal matrix.");
                    }
                }
            }
        }

        if (isDiagonal == true)
        {
            printf("This is a primary diagonal matrix.");
        }
    }
    else
    {
        printf("This is not a primary diagonal matrix.");
    }

    return 0;
}