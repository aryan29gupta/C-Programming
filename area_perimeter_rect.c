#include <stdio.h>
int main(){
    int a,b;
    printf("Enter length and breadth of rectangle  ");
    scanf("%d%d",&a, &b);
    int area= a*b;
    int perimeter= 2*(a+b);
    printf("Area of rectangle is  %d\n", area);
    printf("Perimeter of rectangle is %d", perimeter);
}
