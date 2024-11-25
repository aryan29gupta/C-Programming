#include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    printf("The ASCII value of '%c' is %d\n", character, (int)character);

    return 0;
}
