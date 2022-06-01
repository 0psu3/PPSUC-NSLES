#include <stdio.h>

int main()
{
    int count = 1, sum = 0;
    /*
    while (count < 101) {
        if (count % 3 == 0 && count % 5 == 1)
            sum += count;
        count++;
    }
    */
    do {
        if (count % 3 == 0 && count % 5 == 1)
            sum += count;
        count++;
    } while (count < 101);
   
    printf("sum=%d\n", sum);
    return  0;
}
