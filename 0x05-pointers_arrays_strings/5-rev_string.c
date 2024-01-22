#include "main.h"

void rev_string(char *s)
{
    int count = 0;
    int i = 0;
    char rev = s[0];

    while (s[i] != '\0')
    {
        i++;
        count++;
    }

    for (i = 0; i < count; i++)
    {
        count--;
        rev = s[i];
        s[i] = s[count];
        s[count] = rev;
    }
}