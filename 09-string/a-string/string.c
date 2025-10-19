#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[10];

    for (int i = 0; i <= 4; i++)
    {
        scanf("%c", &string[i]);
    }

    for (int i = 0; i <= 4; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}