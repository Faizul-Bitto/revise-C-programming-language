#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

/*
    For printing 1 to 5 : 
        1 2 3 4 5

    We write a loop like this :

        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }

        It prints : 1 2 3 4 5


    Now let's say we want to print this set of numbers :
        1 2 3 4 5

    3 times ->
        1 2 3 4 5 -> 1 time
        1 2 3 4 5 -> 2 times
        1 2 3 4 5 -> 3 times


    Simply just put this loop of printing 1 to 5 ->

        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }

    in another loop, and run that loop 3 times :

        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf("%d ", j);
            }

            printf("\n");
        }

    We will see the output :
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5

*/