#include<stdio.h>

int main() {
    // Note: The code uses an int array for a string and has several logical errors.
    int num[20], flag, i = 0, last = 0;
    scanf("%s", num);

    // This loop is non-functional as it uses an uninitialized 'i'.
    for (last = 0; num[i] != '\0'; last++) {
    }
    last++;
    printf("%d", last);

    for (i = 0; num[i] != '\0'; i++) {
        if (num[i] == num[last - i]) {
            flag = 1;
        } else {
            flag = 0;
        }
    }
    if (flag == 1) {
        printf("\nA palindrome");
    } else {
        printf("\n NOT A palindrome");
    }

    return 0;
}
