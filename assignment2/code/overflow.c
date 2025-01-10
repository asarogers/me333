#include <stdio.h>

int main(void){
    int i; float j; double d; char c, sum;

    i = 100; j = 240; c='k';
    sum = i+j;
    printf("Formatted output:\n");
    printf(" i = %4d c = '%c'\n",i,c);
    return 0;
}