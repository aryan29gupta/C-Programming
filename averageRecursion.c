#include <stdio.h> 
int sumOfNumbers(int numbers[], int index, int count) { 
if (index == count) { 
return 0; } 
return numbers[index] + sumOfNumbers(numbers, index + 1, count);} 
double averageOfNumbers(int numbers[], int count) { 
int sum = sumOfNumbers(numbers, 0, count); 
return (double)sum / count; } 
int main() { 
int numbers[5]; 
printf("Enter 5 numbers:\n"); 
for (int i = 0; i < 5; i++) { 
printf("Number %d: ", i + 1); 
scanf("%d", &numbers[i]); }     
double average = averageOfNumbers(numbers, 5); 
printf("The average of the entered numbers is: %.2f\n", average);   
return 0;}