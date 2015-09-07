//
// Created by matti on 7.9.2015.
//

#include <stdio.h>
#include <string.h>
main() {
    int c;
    int i = 0;
    int x = 0 ;
    int wordLength[30];
    char currentWord[20];

    for (x = 0; x < 30; x++) {
        wordLength[x] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {

            printf("found word %s of length %d \n", currentWord, (int) strlen(currentWord));
            wordLength[(int) strlen(currentWord)]++;
            i = 0;
            memset(currentWord, 0, 20);
        } else {
            currentWord[i] = c;
            ++i;
        }
    }
    for (x = 0; x < 30; x++) {
        printf("length %d : %d words \n", x, wordLength[x]);
    }
}