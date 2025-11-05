#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(int x)
{
    x = 20;
}

int main()
{
    int x = 10;

    func(x);

    printf("%d", x); // will be printed -> 10

    return 0;
}