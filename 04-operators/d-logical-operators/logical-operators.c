#include <stdio.h>

int main()
{
    /*
        Operators are symbols. To do an operation we use these symbols called 'Operators'. Logical Operators :

        && ( Logical AND) -> Both condition must be true -> true, otherwise false
        || ( Logical OR) -> Any one condition must be true -> true, if both false -> false
        ! ( Logical NOT) -> Reverses the condition: true becomes false, false becomes true

        These operators refers to relations between two conditions. The result will be only 'true' or 'false' as usual. These Logical operators work between two conditions and provides the result in 'true' or 'false'.
    */

    //! && ( Logical AND)
    printf("%d\n", ((5 == 5) && (6 == 6))); // true -> 1

    //! || ( Logical OR)
    printf("%d\n", ((5 == 5) || (7 == 6))); // true -> 1

    //! ! ( Logical NOT)
    printf("%d", (!(5 == 5))); // false -> 0

    return 0;
}