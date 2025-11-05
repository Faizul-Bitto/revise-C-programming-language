#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 10;

    printf("%d\n", a); // will print the value -> 10

    printf("%d", &a); // will print the address where the value '10' stored

    return 0;
}