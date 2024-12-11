#include<stdio.h>
void linear(int arr[],int n,int a){
    int flag = 0;
    for (int i=0;i<n;i++){
    if(a==arr[i]){
        printf("Element %d found at index %d",a,i);
        int flag = 1;
    }
    }
    if (flag == 0 ){
        printf("Element not found");
        
    }
    }
        

void main(){
    int n;
    printf("Enter size of array  ");
    scanf("%d",&n);
    int arr[n];
    int i,j,temp;
    int a;
    for(i=0;i<n;i++){
        printf("Enter element  ");
        scanf("%d",&arr[i]);
        
    }
    printf("Enter element you want to search");
    scanf("%d",&a);
    
    linear(arr,n,a);
}
