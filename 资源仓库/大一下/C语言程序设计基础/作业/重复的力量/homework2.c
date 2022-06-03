#include <stdio.h>

int main()
{
    int input, sum = 0, count = 0;

    do {
        scanf("%d", &input);
        if (input >= 0) {
            sum += input;
            count++;
        }
        else break;
    } while (1);
    if (count == 0) count = 1;
    printf("AVE=%.2f\n", (float)sum / count);
    return 0;
}