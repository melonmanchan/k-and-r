//
// Exercise 1-4
//

#include <stdio.h>

main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("%6s\t%3s\n", "celsius", "fahr");

    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%6.1f\t%3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}