#include <stdio.h>

int main() {
    int up = 0, low = 0, dig = 0;
    char ch;

    printf("Enter a bunch of symbols: ");
    while (scanf("%c", &ch) && ch != '\n') {
        if (ch >= 'A' && ch <= 'Z') up++;
        else if (ch >= 'a' && ch <= 'z') low++;
        else if (ch >= '0' && ch <= '9') dig++;
    }

    printf("Capital letters: %d\nSmall letters: %d\nDigits: %d\n", up, low, dig);

    printf("TI SI UCHENIK PLUS");
    printf("TI SI UCHENIK w 8 klas");
    return 0;
}
