#include <stdio.h>
int check(int a);
int main(){
    int a;
    printf("Enter a number  \n");
    scanf("%d",&a);
    check(a);
    return 0;
}

int check(int a){
    if (a%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
}
