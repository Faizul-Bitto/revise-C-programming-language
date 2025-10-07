#include <stdio.h>

int main()
{
    /*
        for loop syntax :

        for( initialization; condition; increment/decrement){
            do something;
        }
    */

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Hello World!\n");
    }

    return 0;
}