#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    printf("%d\n", array[2]);

    //! assign another value in an index :
    array[4] = 7;
    printf("%d", array[4]);

    return 0;
}

/*
    ! To access an element of an array :
    Every element of an array can be accessed with the index value. Each value has it's own index value. Starts from 0. We can take like this :

    index : 0  1  2  3  4
    value : 1  2  3  4  5

    array[2] -> it will print 3

    ! Assign another value in a particular index :
    array[4] = 7;

    before :
        index : 0  1  2  3  4
        value : 1  2  3  4  5

    after :
        index : 0  1  2  3  4
        value : 1  2  3  4  7
*/