#include <stdio.h>

int main()
{
    /*
        do while loop syntax :

        initialization;

        do{
            do something;
            increment/decrement;
        }
        while( condition );
    */

    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
