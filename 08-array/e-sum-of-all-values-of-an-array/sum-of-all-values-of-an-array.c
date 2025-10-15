#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        printf("%d ", array[i]);

        sum = sum + array[i];
    }

    printf("\n\n");

    printf("%d", sum);

    return 0;
}