#include <stdio.h>

int main() {

    /* Example 4.3 Switch */
    char grade = 'B';

    switch (grade) {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
    case 'C':
        printf("Well done\n");
        break;
    case 'D':
        printf("You passed\n");
        break;
    case 'F':
        printf("Better try again\n");
        break;
    default:
        printf("You entered an invalid grade\n");
    }

    printf("Your grade is  %c\n", grade);
}