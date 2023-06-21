#include <stdio.h>

int main(void)
{
    int fibCount = 50;
    unsigned long long fib1 = 1, fib2 = 2, fibNext;
    int i;

    printf("%llu, %llu", fib1, fib2);

    for (i = 3; i <= fibCount; i++)
    {
        fibNext = fib1 + fib2;
        printf(", %llu", fibNext);
        fib1 = fib2;
        fib2 = fibNext;
    }

    printf("\n");

    return (0);
}
