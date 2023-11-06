#include <iostream>
using namespace std;

// Declaring the function...
void swap(int arr[], int i, int j);

// Function which sorts the array
int selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr, min, i);
        }
    }
}

// Swaping 2 elements
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Printing an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    // Printing original array
    int arr[] = {9, 8, 7, 3, 2, 1, 6, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "\nArray: [";
    printArray(arr, n);
    cout << " ]" << endl;

    // Printing Sorted Array
    selectionSort(arr, n);
    cout << "Sorted Array: [";
    printArray(arr, n);
    cout << " ]" << endl;

    return 0;
}