#include <stdio.h>
#include <math.h>


int lengthfunc(int a) {
    int length = 0;
    while (a != 0) {
        length++;
        a /= 10;
    }
    return length;
}

int main() {
    int a, originalNum, remainder, count = 0;

    printf("Enter a number:\n");
    scanf("%d", &a);

    originalNum = a;
    int length = lengthfunc(a);
    while (originalNum != 0) {
        remainder = originalNum % 10; 
        count += pow(remainder, length); 
        originalNum /= 10;
    }

    if (count == a) {
        printf("The number %d is an Armstrong number.\n", a);
    } else {
        printf("The number %d is not an Armstrong number.\n", a);
    }

    return 0;
}
