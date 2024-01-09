#include "main.h"

int print_last_digit(int a)
{
    int last_digit;

    if (a == 0)
        _putchar(0 + '0');
    else if (a < 0)
    {
        a = -a;
        last_digit = a % 10;
        _putchar(last_digit + '0');
        return (last_digit);
    }
    else
    {
        last_digit = a % 10;
        _putchar(last_digit + '0');
    }
    return (0);
}