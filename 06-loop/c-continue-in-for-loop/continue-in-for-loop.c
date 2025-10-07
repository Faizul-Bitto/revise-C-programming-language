#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // doesn't stop the loop, but just skip the rest execution for this step
        }

        printf("%d\n", i); // result : 1 2 3 4 6 7 8 9 10 -> 5 skipped
    }

    return 0;
}