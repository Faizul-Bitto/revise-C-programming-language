#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int summation(int number1, int number2)
{
    int answer = number1 + number2;

    return answer;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int result = summation(x, y);

    printf("%d", result);

    return 0;
}
