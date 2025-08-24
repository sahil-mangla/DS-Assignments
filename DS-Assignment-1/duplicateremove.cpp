#include <stdio.h>

int main() {
    int arr[100], size, i, j, k;


    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; ) {
            if (arr[i] == arr[j]) {

                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; 
            } else {
                j++; 
            }
        }
    }


    printf("Array after removing duplicates:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

