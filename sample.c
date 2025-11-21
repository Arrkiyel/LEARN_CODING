#include <stdio.h>

int main () {

    // Declare Variables
    int wholenum = 67;
    float decimal = 6.77;
    char letter = 'S'; 

    // Print Variables
    printf("%d\n", wholenum);
    printf("%.2f\n", decimal);
    printf("%c\n", letter);
    printf("My whole number is %d, decimal is %.2f, and letter is %c", wholenum, decimal, letter);
    return 0;
}