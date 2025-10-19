#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char string[10]; //! always declare extra one position, so that, it becomes the size of ( size + 1 )

    scanf("%s", string);
    printf("%s", string);

    /*
        index 0 - H
        index 1 - e
        index 2 - l
        index 3 - l
        index 4 - o

        computer will put :
        index 5 - 0

        rest of the indexes will be filled with garbage values
    */

    /*
        but remember, if we try to print an index value which has no value of the string, it will throw garbage value
    */

    return 0;
}