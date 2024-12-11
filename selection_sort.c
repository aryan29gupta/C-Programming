#include<stdio.h>
void selection(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int minindex = i;
        for(int j = i+1 ; j < n ; j++ ){
            if( arr[j] < arr[minindex] ){
                minindex = j;
            }            
            
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;

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
    selection(arr,n);
    printf("Sorted array is [ ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]");
    
}