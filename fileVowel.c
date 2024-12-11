#include <stdio.h>
void main(){
    FILE *ptr;
    ptr = fopen("VOWELS.txt","r");
    int count = 0;
    char a;
    while (fscanf(ptr,"%c",&a)!= EOF){
    if (a=='a'||a =='e'||a=='i'||a=='o'||a=='u'){
        count +=1;
    }}
    printf("Count is %d",count);


}