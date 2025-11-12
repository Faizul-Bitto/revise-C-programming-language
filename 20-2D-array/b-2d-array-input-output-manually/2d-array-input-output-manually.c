#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int a[row][column];

    scanf("%d", &a[0][0]);
    scanf("%d", &a[0][1]);
    scanf("%d", &a[0][2]);

    scanf("%d", &a[1][0]);
    scanf("%d", &a[1][1]);
    scanf("%d", &a[1][2]);

    scanf("%d", &a[2][0]);
    scanf("%d", &a[2][1]);
    scanf("%d", &a[2][2]);

    printf("%d ", a[0][0]);
    printf("%d ", a[0][1]);
    printf("%d\n", a[0][2]);

    printf("%d ", a[1][0]);
    printf("%d ", a[1][1]);
    printf("%d\n", a[1][2]);

    printf("%d ", a[2][0]);
    printf("%d ", a[2][1]);
    printf("%d\n", a[2][2]);

    return 0;
}