#include <stdio.h>
#include <math.h>
#include <string.h>
#define COUNT 10

int main(void) 
{
    int cal[COUNT];
    memset(cal, 0, sizeof(cal));
    int count = 0, num, dig, mir;

    printf("Please enter the number:\n");
    scanf("%d", &num);
    mir = num;
    num = abs(num);
    while (num) {
        dig = num % 10;
        num /= 10;
        count++;
        cal[dig]++;
    }
    printf("%d:%d bits\n", mir, count);
    for (int i = 0; i < 10; i++) {
        if(cal[i]) printf("%d:%d\n", i, cal[i]);
    }
    return 0;
}