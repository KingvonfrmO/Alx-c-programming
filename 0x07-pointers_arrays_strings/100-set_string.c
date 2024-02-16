#include "main.h"
#include "stdlib.h"

void set_string(char **s, char *to)
{
    int count = 0;
    int i = 0;

    if (*s != NULL)
    {
        free(*s);
    }

    while (to[i] != '\0')
    {
        i++;
        count++;
    }

    *s = (char *) malloc(count + 1);

    i = 0;
    while (to[i] != '\0')
    {
        (*s)[i] = to[i];
        i++;
    }

    (*s)[i] = '\0';
}