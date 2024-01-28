#include "main.h"

char *_strcat(char *dest, char *src)
{
    int i = 0;
    int length_1 = 0;
    int length_2 = 0;

    while (dest[i] != '\0')
    {
        i++;
        length_2++;
    }

    i = 0;
    while (src[i] != '\0')
    {
        i++;
        length_1++;
    }

    for (i = 0; i <= length_1 ; i++)
    {
        dest[length_2 + i] = src[i];
    }

    dest[length_1 + length_2 + 1] = '\0';
    return dest;
}
