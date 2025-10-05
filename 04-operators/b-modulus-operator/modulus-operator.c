#include <stdio.h>

int main()
{
    /*
        Operators are symbols. To do an operation we use these symbols called Modulus Operator :

        % ( modulus )
    */

    int a = 9, b = 5;
    int mod = a % b; // 9 % 5 = 4, 4 is the remainder. Modulus only returns the remainder.

    printf("Modulus : %d", mod); // Output : Modulus : 4

    return 0;
}