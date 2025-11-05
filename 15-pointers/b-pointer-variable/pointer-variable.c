#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
        A variable which stores another variable's memory address is called pointer variable.

        syntax :

        data_type*    variable/pointer_name;

        int *ptr;
     */

    int x = 10;
    printf("address of x                          = %p\n", &x);

    int *ptr;
    ptr = &x;
    printf("address of x, but now stored in ptr   = %p\n", ptr); // address format specifier is -> %p

    printf("address of ptr itself                 = %p", &ptr); // ptr is variable, it has also its own memory address

    return 0;
}