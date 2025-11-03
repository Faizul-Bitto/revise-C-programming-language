#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void summation(int number1, int number2)
{
    int answer = number1 + number2;

    printf("%d", answer);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    summation(x, y);

    return 0;
}
