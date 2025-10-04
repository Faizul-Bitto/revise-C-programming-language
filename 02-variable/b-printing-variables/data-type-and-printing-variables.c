#include <stdio.h>
#include <stdbool.h> // for working with boolean, we need to import this library

int main()
{
    /*
        Data Types :

        int ( integer )
        float ( float )
        double ( double )
        char ( character )
        bool ( boolean , only can store 'true' or 'false', in return shows only two integers : either 0 (false) or 1 (true) )
    */

    int num1;
    num1 = 0;

    int num2 = 10;

    float num3 = 20.5;
    float num4 = 20; // though it's looking int, 20, but it is assigned as float. So, it will be printed like : 20.000000

    char c = 'a'; // single quotes only for storing characters
    char d = '@';

    bool e = true;
    bool f = false;

    printf("%d \n", num1);
    printf("%f \n", num3);
    printf("%f \n", num4);
    printf("\n");

    printf("%.2f \n", num3); // instead of printing 6 digits after ( . ) ( six decimal places ), it will print 2 ( two decimal places )
    printf("%.3f \n", num4); // instead of printing 6 digits after ( . ) ( six decimal places ), it will print 3 ( three decimal places )
    printf("\n");

    printf("%c \n", c);
    printf("%c", d);

    printf("%c \n", c);
    printf("%d \n", e);
    printf("%d", f);

    /*
        Format specifiers :

        %d = int
        %f = float
        %c = char
     */

    return 0;
}