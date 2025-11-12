#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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

    int matrixSize = row * column; // to find out the total matrix size
    int zeroCount = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if ((A[i][j]) == 0)
            {
                zeroCount++; // if it finds zero value then it increases the count
            }
        }
    }

    if (matrixSize == zeroCount)
    {
        printf("This is a zero matrix.");
    }
    else
    {
        printf("This is not a zero matrix.");
    }

    return 0;
}