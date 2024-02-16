#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    unsigned int i;
    if (*needle == '\0')
    {
        return haystack;
    }

    while (*haystack != '\0')
    {
        for (i = 0; needle[i] != '\0' && haystack[i] == needle[i]; )
        {
            i++;
        }

        if (needle[i] == '\0')
        {
            return haystack;
        }

        haystack++;
    }

    return NULL;
}