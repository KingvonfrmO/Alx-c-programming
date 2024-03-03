#include "main.h"

int _sqrt_recursion(int n)
{
    int start, end, mid, result;
    if (n < 0)
    {
        return -1;
    }
    if (n == 1 || n == 1)
    {
        return n;
    }

    start = 1;
    end = n / 2;

    while(start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid < n)
        {
            start = mid + 1;
            result = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return result;
}