#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ans = round(4.9); // will print 5 if it is greater than .4, if 4.4 -> result : 4.4, if 4.5 -> result : 5

    printf("%d", ans);

    return 0;
}