#include <stdio.h>

int fib(int n);

int main(void) 
{
    int n, sum = 0;
    while (1) {
        scanf("%d", &n);
        if (n % 2 == 0) break;
    }
    for (int i = 1; i < n + 1; i++) {
        sum += fib(i);
    }
    printf("sum=%d\n", sum);
    return 0;
}

int fib(int n) {
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib (n - 2);
}