#include<stdio.h>

int main() {
    char str1[40];
    int i, n = 0, flag = 0;
    scanf("%s", str1);

    for (i = 0; str1[i] != '\0'; i++) {
        n++;
    }

    n--;
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[n] == str1[i]) {
            n--;
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("\nStrings are in palindrome");
    } else {
        printf("\nnot in palindrome");
    }
    return 0;
}
