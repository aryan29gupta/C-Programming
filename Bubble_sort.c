#include<stdio.h>
void bubble(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

void main(){
    int n;
    printf("Enter size of array  ");
    scanf("%d",&n);
    int arr[n];
    int i,j,temp;
    for(i=0;i<n;i++){
        printf("Enter element  ");
        scanf("%d",&arr[i]);
        
    }
    bubble(arr,n);
    printf("Sorted array is [ ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]");
    
}