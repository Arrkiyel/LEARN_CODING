#include <stdio.h>

int main () {

    float pi = 3.14159;
    printf("Pi is approximately: %.5f\n", pi);
    return 0;
}

/*
    Reasoning:
    Pi should be declared as a float since it has decimals.
    Format Specifier should have .5 since the given has
    5 decimal places.
*/