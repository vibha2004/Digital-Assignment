#include <stdio.h>
#include <stdlib.h>

int count = 0;

void divide(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        divide(arr, start, mid);
        divide(arr, mid + 1, end);
        count++;
    }
}

int main() {
    int m, i;
    printf("Enter the number of elements: ");
    scanf("%d", &m);
    int *arr = (int*) malloc(m * sizeof(int)); 
    for (i = 0; i < m; i++) {
       
        scanf("%d", &arr[i]);
    }
    divide(arr, 0, m - 1);
    printf("Number of iterations: %d", count);
    free(arr);
    return 0;
}
