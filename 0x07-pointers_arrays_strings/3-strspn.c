#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
    int length = 0;
    int i;
    while (*s != '\0')
    {
        for (i = 0; accept[i] != '\0'; i++)
        {
            if (*s == accept[i])
            {
                length++;
                break;
            }
            else if (accept[i + 1] == '\0')
            {
                return length;
            }
        }
        s++;
    }

    return length;
}

