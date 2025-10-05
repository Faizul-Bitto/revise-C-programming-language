#include <stdio.h>

int main()
{
    int money;
    scanf("%d", &money);

    if (money >= 5000)
    {
        printf("Let's go to Cox's Bazar!");

        if (money >= 10000)
        {
            printf(" Then, let's go to Saint Martin!");
        }
        else
        {
            printf(" And then We will come back!");
        }
    }
    else
    {
        printf("We will not go for travel!");
    }

    return 0;
}