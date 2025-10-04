#include <stdio.h>

int main()
{

    //! First let's declare a type of variable we want to take the data from the user and store in the variable we declared :
    int a;

    scanf("%d", &a); // &a = address of a
    printf("%d\n", a);

    float f;
    scanf("%f", &f);
    printf("%.2f \n", f);

    char c;
    scanf(" %c", &c);
    printf("%c \n", c);

    //! We can print all at once :
    printf("%d %.2f %c", a, f, c);

    return 0;
}