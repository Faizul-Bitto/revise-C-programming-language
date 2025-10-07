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

    //! print only even numbers upto 10
    for (int i = 0; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }

    printf("\n");

    //! print only odd numbers upto 10
    for (int i = 1; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}