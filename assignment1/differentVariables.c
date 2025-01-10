#include <stdio.h>

int main(void){
    char stringArray[3][5] = {
        "hello",
        "world"
    };

    for (int i = 0;  i<3; i++){
        printf("%s \n", stringArray[i]);
    }

    float x = 1.2;
    double y = 2.14;

    char name[4];
    sprintf(name, "Asa");
    printf("%c",name[1]);
    printf("\n");

    int i = 0;
    int k, *ip;

    ip = &i;
    i = 100;

    k = *ip;

    printf(k);
    printf("\n");




    

    return 0;
}