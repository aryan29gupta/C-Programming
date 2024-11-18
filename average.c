#include<stdio.h> 
void main() 
{
    float a[5];
    float m=0;
    int i; 
printf("Enter the values:  "); 
for(i=0;i<5;i++) 
{scanf("%f",&a[i]); 
} 
for(i=0;i<5;i++) 
{
    m=m+a[i];
    
} 
printf("The average of all numbers of array:%f",m/5); 
}