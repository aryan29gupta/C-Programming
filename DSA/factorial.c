#include <stdio.h>

int main() {
    int a = 3;
    int fact = 1;
    int i;
    
    for (i=1; i<=a; i++){
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}