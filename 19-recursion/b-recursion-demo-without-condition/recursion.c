#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printHello()
{
    printf("Hello!\n");

    printHello();
}

int main()
{
    printf("Hi!\n");

    printHello();

    return 0;
}