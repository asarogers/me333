#include <stdio.h>

int main(void) {
    int i;
    float f;
    double d;
    char c;

    i = 32;
    printf("Formatted output:\n");
    printf(" size of i = %2zu \n", sizeof(i));  // Use %zu for size_t
    return 0;
}
