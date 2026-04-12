#include <stdio.h>
void insertionsort(int arr[],int n){
    for (int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={32,67,12,56,22};
    int n=5;
    printf("array after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    insertionsort(arr,n);
    printf("array after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf( "%d ",arr[i]);
    }
    

}