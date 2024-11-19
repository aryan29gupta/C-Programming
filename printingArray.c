#include<stdio.h> 
int main() 
{int a[5],i; 
printf("Enter the values  "); 
for(i=0;i<5;i++) 
{scanf("%d",&a[i]); 
} 
for(i=0;i<5;i++) 
{printf("\nThe value of a[%d] is %d",i,a[i]);} 
return 0; 
}