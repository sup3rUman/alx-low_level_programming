#include <stdio.h>

int main(void)
{
    int limit = 4000000;
    unsigned long long fib1 = 1, fib2 = 2, fibNext;
    unsigned long long sum = 2; // Start with the sum as 2 since the second term (fib2) is even

    while (fibNext <= limit)
    {
        fibNext = fib1 + fib2;

        if (fibNext % 2 == 0)
        {
            sum += fibNext;
        }

        fib1 = fib2;
        fib2 = fibNext;
    }

    printf("%llu\n", sum);

    return (0);
}

