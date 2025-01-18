#include <stdio.h>

// Function to find the greatest common divisor
void greatestCommonDivisor(int a, int b) {
    int c;
    int k = 0;

    // Determine the smaller of the two numbers
    if (a > b) {
        c = b;
    } else {
        c = a;
    }

    // Iterate from 1 to the smaller number and find the GCD
    for (int i = 1; i <= c; i++) {
        if (a % i == 0 && b % i == 0) {
            k = i;
        }
    }

    // Print the GCD
    printf("Greatest common divisor is %d\n", k);
}

int main() {
    int a, b;

    // Take input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Call the GCD function
    greatestCommonDivisor(a, b);

    return 0;
}
