#include<stdio.h>

int main() {
    char str1[40], str2[40];
    int i, j, count = 0;
    scanf("%s", str1);
    // Note: str2 is used without being initialized. This will lead to undefined behavior.

    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                str2[i] = str1[i]; // This logic is unusual
                break;
            }
        }
    }
    printf("\n%s", str2);
    return 0;
}
