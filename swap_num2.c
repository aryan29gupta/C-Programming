#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter two numbers  ");
    scanf("%d%d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("Swapped numbers are \n%d %d",a,b);
}