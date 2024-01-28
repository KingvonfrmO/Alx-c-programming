#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int length_1 = 0;

    while (dest[i] != '\0')
    {
        i++;
        length_1++;
    }

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[length_1 + i] = src[i];
    }

    return dest;
}