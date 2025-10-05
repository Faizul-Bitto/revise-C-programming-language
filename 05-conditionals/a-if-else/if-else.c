#include <stdio.h>

int main()
{
    int taka;
    scanf("%d", &taka);

    if (taka >= 200)
    {
        printf("Eat burger!");
    }
    else
    {
        printf("No burger!");
    }

    /*
        >= -> relational operator -> true or false result -> then, we can imagine it like this :

        if input is greater than or equal 200 :
        then : taka >= 200
        then :

        if (true)
        {
            printf("Eat burger!"); // print this
        }
        else
        {
            printf("No burger!");
        }


        if input is less than 200 :
        then : taka < 200
        then :

        if (false)
        {
            printf("Eat burger!");
        }
        else
        {
            printf("No burger!"); // print this
        }
    */

    return 0;
}