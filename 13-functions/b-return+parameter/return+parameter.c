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
    int result1 = summation(10, 10);
    printf("%d\n", result1);

    int result2 = summation(20, 20);
    printf("%d\n", result2);

    int result3 = summation(30, 30);
    printf("%d", result3);

    return 0;
}
