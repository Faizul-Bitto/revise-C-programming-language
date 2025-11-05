# Changing Value from Pointer Variable

## Overview

As we know, we can store one variable's memory address in another variable, which we call pointer variable. We can also manipulate that variable with that pointer variable, which is called dereferencing.

## Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
        As we know, we can store one variable's memory address in another variable, which we call pointer variable. We can also manipulate that variable with that pointer variable, which is called dereferencing.                             
    */

    int x = 10;
    printf("value of x                                           = %d\n", x);   

    printf("address of x                                         = %p\n", &x);  

    int *ptr;
    ptr = &x;
    printf("address of x, but now stored in ptr                  = %p\n", ptr); 

    *ptr = 200; // go to that address -> in that address -> put the value 200   

    printf("value of x, but now collected from the ptr variable  = %d\n", *ptr);

    /*
        so,

        value -> address = reference

        address -> value = dereference
    */

    return 0;
}
```

