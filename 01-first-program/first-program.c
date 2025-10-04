#include <stdio.h>

int main()
{
    printf("Hello World!");

    // Though we wrote "Hello" & "World!" one after another in two new lines, they will printed in one line like this - "HelloWorld!". Because, program doesn't know to break the lines if we don't guide it.
    printf("Hello");
    printf("World!");

    // Let's guide it then -
    printf("Hello");
    printf("\n"); // backslash and then n -> escape sequence
    printf(
        "World!\n"); // we can even directly put "\n" like this in the same line

    // Another thing is - \t. It means to put a 'tab' space - 4 space -> escape
    // sequence
    printf("Hello\t World!"); // output will be : Hello	 World! 4 space between "Hello" & "World!"

    return 0;
}