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

    bool isSecondaryDiagonal = true;

    if (row == column) // check if square matrix
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if ((i + j) != (row - 1)) // outside diagonal -> outside diagonal -> value must be 0
                {
                    if ((A[i][j]) != 0)
                    {
                        isSecondaryDiagonal = false;

                        printf("This is not a secondary diagonal matrix.");
                    }
                }
            }
        }

        if (isSecondaryDiagonal == true)
        {
            printf("This is a secondary diagonal matrix.");
        }
    }
    else
    {
        printf("This is not a secondary diagonal matrix.");
    }

    return 0;
}