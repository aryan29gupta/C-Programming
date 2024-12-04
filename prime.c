#include <stdio.h>
void main(){

    int i,a;
    printf("Enter a number\n");
    scanf("%d",&a);
    int count = 0;
    for(i=1;i<a;i++){

        if ( a % i == 0 ){
            count++;
        }

    }

    if ( count > 1){
        printf("Not a prime number");
    }
    else{
        printf("Prime number");
    }
}