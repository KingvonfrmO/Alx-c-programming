#include <stdio.h>
#include <stdbool.h>

bool wildcmp_helper(char *s1, char *s2) {
    if (*s1 == '\0' && *s2 == '\0')
        return true;
    
    if (*s2 == '\0')
        return false;
    
    if (*s1 == *s2 || *s2 == '*')
        return wildcmp_helper(s1 + 1, s2 + 1);
    
    return false;
}

int wildcmp(char *s1, char *s2)
{
    return wildcmp_helper(s1, s2) ? 1 : 0;
}