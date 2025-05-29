#include <stdio.h>

int main(void) {
    int value, square,

    printf("Give me a number and I will square it!\n");
    scanf("%d", &value);
    if (value>=0.0) {
        square = value*value;

        printf("You've give me: %d\n", value);
        printf("The squared value is: %d\n", square);
    }
    
    return 0
}