#include "main.h"

int _strlen(char *s)
{
    int count, i;
    if (s == NULL)
    {
        return 0;
    }

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        i++;
        count++;
    }

    return count;
}