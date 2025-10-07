#include<stdio.h>

int main() {
    char num[40];
    int i, n = 0;
    scanf("%s", num);

    for (i = 0; num[i] != '\0'; i++) {
        n++;
    }
    printf("\nString length %d", n);
    return 0;
}
