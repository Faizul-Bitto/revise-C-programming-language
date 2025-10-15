#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int array[5];

    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &array[i]);
    }

    //! show all elements of the array
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

/*
    ! To take input in the array, we have to run a loop and take the values one by one :
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &array[i]);
    }

    ! And then we can simply print the elements with a loop :
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", array[i]);
    }
*/