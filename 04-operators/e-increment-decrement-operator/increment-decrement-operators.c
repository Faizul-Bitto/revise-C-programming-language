#include <stdio.h>

int main()
{
    /*
        Operators are symbols. To do an operation we use these symbols called
       'Operators'. Increment & decrement Operators :

        post increment/decrement :
        i++ => i += 1 => i = i + 1
        i-- => i -= 1 => i = i - 1

        i*=3 => i = i * 3
        i/=3 => i = i / 3

        pre increment/decrement :
        ++i => i += 1 => i = i + 1
        --i => i -= 1 => i = i - 1
    */

    //! what post increment does : first the assign work will be done then x will be increased by 1
    int x = 5;
    int y = x++; // first x will be copied to y , so, y = 5, then x will be increased +1 and it will be 6 as it is post increment
    printf("%d %d\n", x, y);

    //! what pre increment does : first x2 will be increased by 1 then the assign work will be done, so y2 will be 6
    int x2 = 5;
    int y2 = ++x2; // first x2 will be increased by 1 , so, x2 = 6, then x2 will be assigned to y2 , so y2 will be 6 also, as it is pre increment
    printf("%d %d", x2, y2);

    return 0;
}