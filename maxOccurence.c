#include <stdio.h>
void maxOccurence(int n, int array[]) {
    int max = array[0];
    int count = 0;
    for(int i = 1; i < n; i++){
        if(max < array[i])
            max = array[i];
    }
    for(int j = 0 ; j < n; j++){
        if(max == array[j])
            count++;
    }
    printf("The Maximum Number is %d & it appeared %d times.",max,count);
}
void main(){
    int n;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter array elements ");
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    printf("array = ");
    for(int i = 0; i < n; i++){
        printf("%d ",array[i]);
    }
    maxOccurence(n, array);
}