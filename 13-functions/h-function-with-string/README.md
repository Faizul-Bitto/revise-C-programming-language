# Function with String

## Code

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(char s[])
{
    printf("%s\n", s);

    int lengthOfString = strlen(s);

    printf("%d", lengthOfString);
}

int main()
{
    char s[10];

    scanf("%s", s);

    func(s);

    return 0;
}
```

