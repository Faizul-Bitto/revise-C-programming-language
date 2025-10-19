#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[50];

    // string input with space with fgets()
    fgets(string, 8, stdin);
    printf("%s", string);

    return 0;
}