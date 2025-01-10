#include <stdio.h>

int main(void) {
    unsigned char a, b, c;
    a = 0x0D;
    b = 0x03;

    c = ~a;//not
    printf("c = ~a:%x\n", c);

    c = a & b;//both
    printf("c = a & b: %x\n", c);

    c = a | b; // one or the other
    printf("c = a | b: %x\n", c);

    c = a ^ b;//XOR 
    //one or the other, but not both
    printf("c = a ^ b: %x\n", c);

    c = a >> 3;
    printf("c = a >> 3: %x\n", c);

    c = a << 3;
    printf("c = a << 3: %x\n", c);

    c &= b;
    printf("c &= b: %x\n", c);

    return 0;
}
