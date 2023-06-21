#include <stdio.h>

void print_fibonacci(int count)
{
    int fibCount = count > 2 ? count : 2; // Ensure we calculate at least the first 2 Fibonacci numbers
    int fib1 = 1, fib2 = 2;

    printf("%d, %d", fib1, fib2);

    int fibNext;
    int i;

    for (i = 3; i <= fibCount; i++)
    {
        fibNext = fib1 + fib2;
        printf(", %d", fibNext);
        fib1 = fib2;
        fib2 = fibNext;
    }

    printf("\n");
}

int main(void)
{
    print_fibonacci(98);

    return (0);
}

