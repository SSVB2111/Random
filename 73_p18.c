#include<stdio.h>

int main() {
    int i = 0;
    char pass[10];
    char orgpass[10];

    printf("Enter original password:");
    scanf("%s", orgpass);

    do {
        printf("\nEnter the password: ");
        scanf("%s", pass);
        // The loop below re-initializes 'i' to 0 in every attempt, which is a bug.
        for (i = 0; pass[i] != '\0'; i++) {
            if (pass[i] == orgpass[i]) {
                continue;
            } else {
                break;
            }
        }
        // There is missing logic here to correctly check if the password was valid.
        printf("\n\nInvalid password");
        i++;
    } while (i < 3);

    printf("\n Session Expired");
    return 0;
}
