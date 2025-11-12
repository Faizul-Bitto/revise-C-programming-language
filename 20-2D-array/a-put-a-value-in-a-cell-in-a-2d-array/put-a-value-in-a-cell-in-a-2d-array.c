#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a[3][4];
    a[1][2] = 10;
    printf("%d", a[1][2]);

    return 0;
}

/*
    2D array declaring syntax :

        data_type    array_name[row_size] [column_size];
                                   r             c


    This is like a matrix :

          0      1      2      3


    0     00     01     02     03


    1     10     11     12     13


    2     20     21     22     23


    So, if we now want to put a value '10' in 12 cell, then -> we will do this ->
    a[1][2] = 10;

        0      1      2      3


    0


    1                 10


    2



*/