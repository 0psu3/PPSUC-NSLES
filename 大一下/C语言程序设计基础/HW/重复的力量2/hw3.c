#include <stdio.h>
#include <math.h>

int main(void) 
{
    float height = 100, sum = 0;
    int n;

    while (1) {
        printf("Input:\n");
        scanf("%d", &n);
        if (n <= 15) break;
    }

    for (int i = 0; i < n; i++) {
        sum += height / pow(2, i) * 2;
    }

    printf("%d times:\n", n);
    printf("%.3f\n", sum - 100);
    printf("%.3f\n", height / pow(2, n));
    return 0;
}