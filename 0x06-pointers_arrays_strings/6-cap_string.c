#include "main.h"
#include <ctype.h>

char *cap_string(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
            str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' ||
            str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' ||
            str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
            str[i - 1] == '{' || str[i - 1] == '}')
        {
            if (islower(str[i]))
                str[i] = toupper(str[i]);
        }
    }

    return str;
}