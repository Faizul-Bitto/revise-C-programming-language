#include <stdio.h>

int main()
{
    /*
        while loop syntax :

        initialization;

        while( condition ){
            do something;
            increment/decrement;
        }
    */

    int i = 1;

    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}