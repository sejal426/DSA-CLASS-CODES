#include <stdio.h>
void selectionsort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        
    }
    
}
int main(){
    int arr[]={32,67,12,56,22};
    int n=5;
    printf("array before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    selectionsort(arr,n);
    printf("array after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf( "%d  ",arr[i]);
    }
    

}