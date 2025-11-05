#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void func(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("index %d = %d\n", i, a[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    func(a, n);

    return 0;
}