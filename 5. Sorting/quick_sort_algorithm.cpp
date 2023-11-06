#include <iostream>
using namespace std;

// Declaring the functions...
int partition(int arr[], int low, int high);
void swap(int arr[], int i, int j);

// Function which sorts the array with the help of 'partition' function
int quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
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
        cout << " " << arr[i];
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
    quickSort(arr, 0, n);
    cout << "Sorted Array: [";
    printArray(arr, n);
    cout << " ]" << endl;

    return 0;
}