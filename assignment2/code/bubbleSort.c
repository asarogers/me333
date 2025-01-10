#include <stdio.h>

#define MAXSIZE 100

int main(void) {
    char response[MAXSIZE];

    printf("Enter your unsorted string: \n");
    scanf("%[^\n]", response);

    int size = 0; 
    for (int i = 0; i < MAXSIZE; i++) {
        char num = response[i];
        if (num != '\0') {
        } else {
            size = i;
            break;
        }
    }

    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size - i -1; j++){
            if (response[j] > response[j+1]){
                char temp = response[j];
                response[j] = response[j+1];
                response[j + 1] = temp;
            }

        }
        
    }

    printf("sorted string is array: ");
    for (int i = 0; i < size; i++) {
        printf("%c", response[i]);
    }
    printf("\n");

    return 0;
}
