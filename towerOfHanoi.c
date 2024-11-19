#include<stdio.h> 
void towerofhanoi(int n,char beg_rod,char aux_rod,char end_rod) {
    if(n>=1) {
    towerofhanoi(n-1,beg_rod,end_rod,aux_rod); 
printf("\n Move disk %d from rod %c to rod%c",n,beg_rod,end_rod); 
towerofhanoi((n-1),aux_rod,beg_rod,end_rod); 
} 
} 
int main() 
{int n=3; 
towerofhanoi(n,'A','B','C'); 
return 0;}