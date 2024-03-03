#include  "main.h"

int is_prime_number(int n)
{
    int i;
    if (n <= 1)
    {
        return 0;
    }
    else if (n <= 3)
    {
        return 1;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }
    
    for (i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }

    return 1;
}
