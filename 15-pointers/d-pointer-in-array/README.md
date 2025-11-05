# Pointer in Array

## Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    printf("0th index address    = %p\n", &a[0]);
    printf("1st index address    = %p\n", &a[1]);
    printf("2nd index address    = %p\n", &a[2]);
    printf("3rd index address    = %p\n", &a[3]);
    printf("4th index address    = %p\n\n", &a[4]);

    printf("address of the array = %p\n\n", &a);

    printf("value of *a          = %d\n\n", *a); // 10 -> as it holds the memory address of the first value, so it will reference the first value               

    *a = 200; // value changed 10 to 200

    for (int i = 0; i < 5; i++)
    {
        printf("index %d = %d\n", i, a[i]);
    }

    return 0;
}
```

