#include <stdbool.h> // for working with boolean, we need to import this library
#include <stdio.h>

int main()
{
    /*
        Data Types :

        int ( integer ) -> limitation : 4 bytes
        long long int -> for more space = 'long long int' instead of 'int' -> long
       long int : 8 bytes

        float ( float ) -> limitation : 4 bytes
        double ( double ) -> for more space = 'double' instead of 'float' ->
       double : 8 bytes

        char ( character )
        bool ( boolean , only can store 'true' or 'false', in return shows only
       two integers : either 0 (false) or 1 (true) )
    */

    /*
        int ( integer ) -> limitation : 4 bytes -> 10^9
        long long int -> for more space = 'long long int' instead of 'int' -> long
       long int : 8 bytes -> 10^18

        float ( float ) -> limitation : 4 bytes
        double ( double ) -> for more space = 'double' instead of 'float' ->
       double : 8 bytes

        So, we also should keep these limitations in mind while choosing the right
       data type.
    */

    int num1;
    num1 = 0;

    int num2 = 10;

    float num3 = 20.5;
    float num4 = 20; // though it's looking int, 20, but it is assigned as float.
                     // So, it will be printed like : 20.000000

    char c = 'a'; // single quotes only for storing characters
    char d = '@';

    bool e = true;
    bool f = false;

    printf("%d \n", num1);
    printf("%f \n", num3);
    printf("%f \n", num4);
    printf("\n");

    printf("%.2f \n",
           num3); // instead of printing 6 digits after ( . ) ( six decimal places
                  // ), it will print 2 ( two decimal places )
    printf("%.3f \n",
           num4); // instead of printing 6 digits after ( . ) ( six decimal places
                  // ), it will print 3 ( three decimal places )
    printf("\n");

    printf("%c \n", c);
    printf("%c", d);

    printf("%c \n", c);
    printf("%d \n", e);
    printf("%d \n", f);

    /*
        Format specifiers :

        %d = int
        %f = float
        %c = char
        %lld = long long int
        %lf = double
     */

    //! Limitations :
    int h = 1000000000; // 10^9
    printf("%d \n", h); // right output : 1000000000
    // More than 10^9 :
    int i = 1000000000000; // 10^12
    printf("%d \n", i);    // getting wrong output : -727379968

    // To work with more memory storage :
    long long int j = 100000000000000000;   // 10^17
    printf("%lld \n", j);                   // right output : 100000000000000000
    long long int k = 10000000000000000000; // 10^19
    printf("%lld \n", k);                   // getting wrong output : -8446744073709551616

    float l = 2134.1234; // almost gives correct output for total 8 digits, with decimal point ( 2134.1234 ), more than that, gives error value
    printf("%f \n", l);  // output : 2134.123291

    double m = 2134.123456; // gives correct output for total 10 digits, with decimal point ( 2134.123456 ), more than that, gives no value than that
    printf("%lf \n", m);    // output : 2134.123456

    return 0;
}