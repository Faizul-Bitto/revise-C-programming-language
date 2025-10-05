#include <stdio.h>

int main()
{
    /*
        Operators are symbols. To do an operation we use these symbols called 'Operators'. Relational Operators :

        < ( Less than)
        <= ( Less than or equal )
        > ( Greater than )
        >= ( Greater than or equal )
        == ( Equals to )
        != ( Not equals to )

        These operators refers to relations between data. The result will be only 'true' or 'false'. These relational operators work between two data and provides the result in 'true' or 'false'.
    */

    //! == ( Equals to )
    int a = 5, b = 5;
    int result = (a == b);  // true ( 5 = 5 )
    printf("%d\n", result); // output : 1 -> true

    //! < ( Less than)
    int c = 15, d = 25;
    printf("%d\n", (c < d)); // output : 1 -> true

    //! > ( Greater than )
    int e = 15, f = 25;
    printf("%d\n", (e > f)); // output : 0 -> false

    //! <= ( Less than or equal )
    int g = 15, h = 25;
    printf("%d\n", (g <= h)); // output : 1 -> true

    //! >= ( Greater than or equal )
    int i = 15, j = 25;
    printf("%d\n", (i >= j)); // output : 0 -> false

    //! != ( Not equals to )
    int k = 15, l = 25;
    printf("%d\n", (k != l)); // output : 1 -> true

    return 0;
}