#include "main.h"

char *rot13(char *str)
{
    char *first = "abcdefghijklmABCDEFGHIJKLM";
    char *last = "nopqrstuvwxyzNOPQRSTUVWXYZ";
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; first[j] != '\0'; j++)
        {
            if (str[i] == first[j])
            {
                str[i] = last[j];
                break;
            }
            else if (str[i] == last[j])
            {
                str[i] = first[j];
                break;
            } 
        }
    }

    return str;
}
