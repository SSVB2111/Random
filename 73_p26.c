#include<stdio.h>

int main() {
    char str[40];
    int i, count = 1;
    gets(str); // Note: gets() is deprecated and unsafe.

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    // The output string says "length" but the code counts words.
    printf("\nlength of the string is: %d", count);
    return 0;
}
