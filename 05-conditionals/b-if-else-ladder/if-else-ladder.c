#include <stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);

    if (taka >= 500)
    {
        printf("Eat pizza!");
    }
    else if (taka >= 200)
    {
        printf("Eat shawarma!");
    }
    else if (taka >= 100)
    {
        printf("Eat burger!");
    }
    else
    {
        printf("Nothing to eat!");
    }

    return 0;
}