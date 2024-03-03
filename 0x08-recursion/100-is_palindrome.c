#include "main.h"
#include <string.h>

int is_palindrome(char *s)
{
    int length, i;
    if (s == NULL)
        return 1; 

    length = strlen(s);

    if (length == 0)
        return 1;

    for (i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
            return 0; 
    }
    return 1; 
}