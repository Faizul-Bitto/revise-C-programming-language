#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, star = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = 1; j <= star; j++) // for printing *
        {
            printf("*");
        }

        printf("\n");
        star++;
    }

    return 0;
}

/*
another method :

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int j = 1; j <= i; j++) // for printing *
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
*/