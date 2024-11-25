#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    float c = sqrt(a);
    printf("Square root of %d is %f",a,c);
}