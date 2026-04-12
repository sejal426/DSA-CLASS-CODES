#include <stdio.h>
void bubblesort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j = 0; j < n-i-1; j++)
        {   if(arr[j]>arr[j+1]){
                int element=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=element;
            }
        }
        
    }
}
int main(){
    int arr[]={66,78,32,1,45};
    int n= 5;
    printf("array before sorting:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    bubblesort(arr,n);
    printf("array after sorting:\n ");
    for (int j= 0; j < n; j++)
    {
        printf("%d  ",arr[j]);
    }
    
    return 0;
    




}