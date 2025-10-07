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

    printf("\n");

    //! reverse :
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    printf("\n");

    //! reverse :
    for (int i = 1; i <= 10; i *= 2)
    {
        printf("%d\n", i);
    }

    printf("\n");

    /*
        Sum from 1 to N ( get N from user input )
    */
    int N;
    scanf("%d", &N);
    int sum = 0;

    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    printf("\n");

    //! condition in for loop ( only print even ) :
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    printf("\n");

    //! condition in for loop ( only print odd ) :
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    printf("\n");

    //! condition in for loop ( print all even and odd ) :
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even - %d\n", i);
        }
        else
        {
            printf("Odd  - %d\n", i);
        }
    }

    return 0;
}