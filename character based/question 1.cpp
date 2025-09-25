#include <stdio.h>

int main() {
    char b;

    printf("Enter a letter: ");
    scanf("%c", &b);  

    if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' ||
        b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U') {
        printf("The entered letter is a vowel\n");
    } else {
        printf("The entered letter is not a vowel\n");
    }

    return 0;
}
