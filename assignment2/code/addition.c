#include <stdio.h>

int main(void) {
    unsigned char i, j, k, sum;
    i = 60;
    j = 80;
    k = 200;

    sum = i + j;
    printf("i + j = %d\n", sum);

    sum = i + k;
    printf("i + k = %d\n", sum);

    sum = k + j;
    printf("k + j = %d\n", sum);
    return 0;
}
