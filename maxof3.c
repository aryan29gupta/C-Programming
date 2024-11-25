#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter three numbers  \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a == b && b== c){
        printf("All three numbers are equal");
    }
    else if( a>b && a>c){
        printf("A is greatest");
    }
    else if( b>a && b>c ){
        printf("B is greatest");
    }
    else if( c>a && c>b){
        printf("C is greatest");
    }
}