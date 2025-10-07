#include<stdio.h>
#include<string.h>

int main() {
    char num[20];
    // frequency array for digits 0-9
    int freq[10] = {0};

    scanf("%s", num);

    // loop through each character in the string
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            // increment corresponding digit count
            freq[num[i] - '0']++;
        }
    }

    // Print frequency of each digit
    for (int i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", i, freq[i]);
        }
    }
    
    return 0;
}
