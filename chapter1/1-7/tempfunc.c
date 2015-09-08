//
// Created by matti on 8.9.2015.
//

#include <stdio.h>


float fahrtocelsius(float fahr);

main() {

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%3s\t%6s\n", "fahr", "celsius");

    while (fahr <= upper) {

        printf("%3.0f\t%6.1f\n", fahr, fahrtocelsius(fahr));
        fahr = fahr + step;
    }

}

float fahrtocelsius(float fahr) {
    float x = (float)5.0 * (fahr-32.0) / 9.0;
    return x;

}
