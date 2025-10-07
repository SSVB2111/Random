#include<stdio.h>

int main() {
    char str1[40], str2[40];
    int i, n = 0, flag = 0;
    scanf("%s", str1);
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        n++;
    }

    n--;
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[n] == str2[i]) {
            n--;
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("\nstrings are in anagram"); // Note: This checks if str2 is the reverse of str1
    } else {
        printf("\nnot in anagram");
    }
    return 0;
}
