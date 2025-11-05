# Passing Array in Function

## Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(int a[])
{
    a[1] = 200;
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    func(a);

    for (int i = 0; i < 5; i++)
    {
        printf("index %d = %d\n", i, a[i]);
    }

    return 0;
}
```

