#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    double pi; 
    
    while ((float)1 / (2 * n + 1) >= 0.00001) {
        pi += 4 * pow(-1.0, (double)n) / (2 * n + 1); 
        n++;
    }
    printf("pi=%.2f", pi);
    return 0;
}