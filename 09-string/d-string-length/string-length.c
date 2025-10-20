#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[50];
    scanf("%s", string);

    int count = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);

    return 0;
}