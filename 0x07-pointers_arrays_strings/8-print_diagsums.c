#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int i;
    int sum_1 = 0;
    int sum_2 = 0;

    for (i = 0; i < size; i++)
    {
        sum_1 += a[i * size + i];
    }

    for (i  = size - 1; i >= 0; i--)
    {
        sum_2 += a[i * size +(size - i - 1)];
    }

    printf("%d, %d\n",sum_1,sum_2);
}