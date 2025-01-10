#include <stdio.h>

int main(void) {
   int a=2, b=3, c;
   float d=1.0,e=3.5,f;


    // f = a/b;
    // printf("a/b = %f\n", f);

    // f=((float)a)/b;
    // printf("((float)a)/b = %f\n", f);

    // f = (float)(a/b);
    // printf("(float)a/b = %f\n", f);

    c = e/d;
    printf("e/d = %d\n", c);

    c = (int)(e/d);
    printf("(int)e/d = %d\n", c);

    c =((int)e)/d;
    printf("((int)e)/d = %d\n", c);
    return 0;
}
