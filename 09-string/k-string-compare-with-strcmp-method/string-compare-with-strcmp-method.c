#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    int comparisonValue = strcmp(b, a);

    printf("%d\n", comparisonValue);

    if (comparisonValue < 0)
    {
        printf("First is smaller\n");
        printf("Second is bigger\n");
    }
    else if (comparisonValue > 0)
    {
        printf("First is bigger\n");
        printf("Second is smaller\n");
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}