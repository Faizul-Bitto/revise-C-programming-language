#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    int stringLengthOfFirstString = strlen(a);
    int stringLengthOfSecondString = strlen(b);

    for (int i = 0; i <= stringLengthOfSecondString; i++)
    {
        a[i + stringLengthOfFirstString] = b[i];
    }

    printf("%s %s", a, b);

    return 0;
}