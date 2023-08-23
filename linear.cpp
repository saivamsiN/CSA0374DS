#include <stdio.h>
#define MAX 10 // maximum size of the array

// function prototype
int linear_search(int arr[], int n, int x);

int main()
{
    int arr[MAX]; // array declaration
    int n, i, x; // variables for user input and loop
    int result; // variable to store the search result

    printf("Enter the number of elements in the array (max %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) // check if number of elements is valid
    {
        printf("Invalid number of elements, try again.\n");
        return 0;
    }

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) // loop to input the array elements
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    result = linear_search(arr, n, x); // call linear_search function

    if (result == -1) // check if element is not found
    {
        printf("Element %d is not present in the array.\n", x);
    }
    else // element is found
    {
        printf("Element %d is present at index %d in the array.\n", x, result);
    }
    return 0;
}

// function to perform linear search on an array
int linear_search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++) // loop through the array
    {
        if (arr[i] == x) // check if element matches
        {
            return i; // return the index of the element
        }
    }
    return -1; // return -1 if element is not found
}

