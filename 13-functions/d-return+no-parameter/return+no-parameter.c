#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int summation()
{
    int number1, number2;
    scanf("%d %d", &number1, &number2);

    int answer = number1 + number2;

    return answer;
}

int main()
{
    int result = summation();
    printf("%d\n", result);

    return 0;
}
