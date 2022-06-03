#include <stdio.h>

int chriswhite(int n);

int main(void) 
{
    int day;
    while (1) {
        printf("Input days:\n");
        scanf("%d", &day);
        if (day > 0) break;
    }
    printf("x=%d\n",chriswhite(day));
    return 0;
}

int chriswhite(int n) {
    if (n == 1) return 1;
    return chriswhite(n - 1) * 2 + 2;
}