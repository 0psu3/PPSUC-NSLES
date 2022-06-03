#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) 
{
    int a, b, max, min;
    scanf("%d %d", &a, &b);
    max = (a > b) ? a: b;
    min = (a > b) ? b: a;
    int cal[max];
    memset(cal, 0, sizeof(cal));
    for (int i = 0; i < min; i++) {
        if (a % (i + 1) == 0) cal[i]++;
        if (b % (i + 1) == 0) cal[i]++;
    }
    for (int i = min; i > 0; i--) {
        if (cal[i - 1] == 2) {
            printf("GCD=%d", i);
            break;
        }
    }
    return 0;
}