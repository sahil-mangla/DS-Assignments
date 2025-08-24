#include <stdio.h>
#define MAX 100

int arr[MAX];
int size = 0;


void create() {
    printf("Enter number of elements: ");
    scanf("%d", &size);
    if (size > MAX) {
        printf("Size exceeds maximum limit!\n");
        size = 0;
        return;
    }
    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}


void display() {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void insert() {
    int pos, elem;
    printf("Enter position to insert (0-based index): ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &elem);

    if (pos < 0 || pos > size || size == MAX) {
        printf("Invalid position or array is full.\n");
        return;
    }

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    size++;
    printf("Element inserted.\n");
}


void delete_element() {
    int elem, pos = -1;
    printf("Enter element to delete: ");
    scanf("%d", &elem);

    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found.\n");
        return;
    }

    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Element deleted.\n");
}


void linear_search() {
    int elem, found = 0;
    printf("Enter element to search: ");
    scanf("%d", &elem);

    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. INSERT\n");
        printf("4. DELETE\n");
        printf("5. LINEAR SEARCH\n");
        printf("6. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete_element();
                break;
            case 5:
                linear_search();
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    } while (choice != 6);

    return 0;
}
