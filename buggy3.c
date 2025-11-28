#include <stdio.h>

int main() {

    int age = 18;
    double gpa = 1.25;
    printf("Age: %d, GPA: %.2lf\n", age, gpa);
    return 0;
}

/*
    Reasoning:
    The int has no declared value, the value of double has
    a missing semi-colon, and return statement also has
    a missing semi-colon. Although %f works for the variable
    type double, I think it is better to practice using the
    exact format specifier to avaoid confusion in the long run.
*/