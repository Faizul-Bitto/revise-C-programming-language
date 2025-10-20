#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[50];
    scanf("%s", string);

    int stringSize = strlen(string);

    printf("%d", stringSize);

    return 0;
}