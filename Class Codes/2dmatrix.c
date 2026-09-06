#include <stdio.h>
int main(){
    int m,n,element;
    printf("enter no. of rows of matrix: ");
    scanf("%d",&m);
    printf("enter no. of columns of matrix: ");
    scanf("%d",&n);
    int arr[m][n];
    printf("matrix = arr[%d][%d]",m,n);
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter[%d][%d]element:",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("the matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }    

}
