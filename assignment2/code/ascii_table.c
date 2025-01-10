#include <stdio.h>

int main(void) {
    char j = 0;
    for (int i =33; i <=127; i++){
        printf("%3i: %-3c", i, i);
        j += 1;
        if(j % 5 == 0 && i !=127){
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
