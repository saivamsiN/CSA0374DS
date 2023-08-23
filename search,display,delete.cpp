#include <stdio.h>
#define MAX 10 // maximum size of the array

// function prototypes
int insert(int arr[], int *n, int pos, int x);
int delete(int arr[], int *n, int pos);
int display(int arr[], int n);

int main()
{
    int arr[MAX]; // array declaration
    int n = 0; // number of elements in the array
    int choice, pos, x; // variables for user input

    while (1)
    {
        // display menu
        printf("\nArray Operations\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // insert operation
            if (n == MAX) // check if array is full
            {
                printf("Array is full, cannot insert.\n");
                break;
            }
            printf("Enter the position to insert: ");
            scanf("%d", &pos);
            if (pos < 1 || pos > n + 1) // check if position is valid
            {
                printf("Invalid position, try again.\n");
                break;
            }
            printf("Enter the element to insert: ");
            scanf("%d", &x);
            insert(arr, &n, pos, x); // call insert function
            printf("Element inserted successfully.\n");
            break;
        case 2: // delete operation
            if (n == 0) // check if array is empty
            {
                printf("Array is empty, cannot delete.\n");
                break;
            }
            printf("Enter the position to delete: ");
            scanf("%d", &pos);
            if (pos < 1 || pos > n) // check if position is valid
            {
                printf("Invalid position, try again.\n");
                break;
            }
            delete(arr, &n, pos); // call delete function
            printf("Element deleted successfully.\n");
            break;
        case 3: // display operation
            display(arr, n); // call display function
            break;
        case 4: // exit operation
            return 0; // terminate the program
        default: // invalid choice
            printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}

// function to insert an element at a given position in an array
void insert(int arr[], int *n, int pos, int x)
{
    int i;
    for (i = *n - 1; i >= pos - 1; i--) // shift elements to the right
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = x; // insert the element at the position
    (*n)++; // increment the number of elements
}

// function to delete an element from a given position in an array
void delete(int arr[], int *n, int pos)
{
    int i;
    for (i = pos - 1; i < *n - 1; i++) // shift elements to the left
    {
        arr[i] = arr[i + 1];
    }
    (*n)--; // decrement the number of elements
}

// function to display the elements of an array
void display(int arr[], int n)
{
    int i;
    if (n == 0) // check if array is empty
    {
        printf("Array is empty.\n");
        return;
    }
    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) // loop through the array
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

