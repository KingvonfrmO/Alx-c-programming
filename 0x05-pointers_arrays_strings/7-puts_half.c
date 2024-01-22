#include "main.h"

void puts_half(char *str)
{
    int i = 0, n;
    int length_of_the_string = 0;

    while (str[i] != '\0')
    {
        i++;
        length_of_the_string++;
    }
    if (length_of_the_string % 2 != 0)
    {
        n = (length_of_the_string - 1) / 2;
        for (i = n; i < length_of_the_string; i++)
        {
            _putchar(str[i]);
        }
        _putchar('\n');
    }
    else
    {
        n = length_of_the_string / 2;
        for (i = n; i < length_of_the_string; i++)
        {
            _putchar(str[i]);
        }
        _putchar('\n');
    }
}