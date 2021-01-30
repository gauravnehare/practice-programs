#include <stdio.h>
int diagonalDifference(int arr_rows, int arr_columns, int arr[10][10]) {
    int sum1 = 0, sum2 = 0, finalsum = 0;
    /* for diagonal top-left to bottom-right */
    for(int i = 0; i < arr_rows; i++){
        for(int j = 0; j < arr_columns; j++){
            if(i == j)
            sum1 += arr[i][j];
        }
    }
    /* for diagonal top-right to bottom-left */
    for(int i = 0; i < arr_rows; i++){
        for(int j = 0; j < arr_columns; j++){
            if(i + j == (arr_columns - 1))
            sum2 += arr[i][j];                
        }
    }
    finalsum = sum1 - sum2;
    /* To change the negative output to positive */
    if(finalsum < 0){
        finalsum = -1 * finalsum;
    } 
    return finalsum;
}
void main(){
    int i, j, n;
    int matrix[10][10];

    printf("Enter number of rows & columns (number of rows = number of columns): ");
    scanf("%d", &n);

    /* Input data in matrix */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    /* Display the matrix */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    int result = diagonalDifference(n, n, matrix);
    printf("Result is %d",result);
}