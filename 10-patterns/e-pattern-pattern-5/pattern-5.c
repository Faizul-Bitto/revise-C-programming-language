#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int value = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = 1; j <= space; j++) // for printing space
        {
            printf(" ");
        }

        for (int j = 1; j <= value; j++) // for printing *
        {
            printf("%d", j);
        }

        printf("\n");
        value++;
        space--;
    }

    return 0;
}