#include <stdio.h>

int main()
{
    /*
        Operators are symbol.To do an operation we use these symbols called 'Operators'. Arithmetic operators :

        + ( addition )
        - ( subtraction )
        * ( multiplication )
        / ( division )
    */

    //! + ( addition )
    int a = 10, b = 20;
    int sum = a + b;
    printf("Summation : %d\n", sum);

    //! - ( subtraction )
    int c = 30, d = 20;
    int sub = c - d;
    printf("Subtraction : %d\n", sub);

    //! * ( multiplication )
    int e = 30, f = 20;
    int mul = e * f;
    printf("Multiplication : %d\n", mul);

    //! / ( division )
    int g = 5, h = 2;
    int div = g / h;
    printf("Division : %d\n", div); // answer - 2 ( instead of 2.5 ), if any float value comes, it will print in integer form, as the format specifier is "%d"

    //! / ( division )
    int i = 9;
    float j = 2;        // initiate any variable in float
    float div2 = i / j; // so, we have to store the value in float
    printf("Division : %.2f\n", div2);

    // another way is to type casting
    int k = 9, l = 2;
    float div3 = (float)k / l; // cast one operand to float
    printf("Division : %.2f\n", div3);

    return 0;
}