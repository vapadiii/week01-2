#include <stdio.h>
#include <stdlib.h>

int main() {
    float x, y;
    float sum;
    printf("input x : ");
    scanf("%f", &x);
    printf("input y : ");
    scanf("%f", &y);
    printf("\n");
    //printf("x+y = %d\n",x + y);
    sum = x + y;
    printf("%.2f+%.2f = %.2f\n", x, y, sum);
    //printf("%d+%d = %d\n", x, y, x + y);
    sum = x - y;
    printf("%.2f-%.2f = %.2f\n", x, y, sum);
    sum = x * y;
    printf("%.2f*%.2f = %.2f\n", x, y, sum);
    sum = x / y;
    printf("%.2f/%.2f = %.2f\n", x, y, sum);
    return 0;
}