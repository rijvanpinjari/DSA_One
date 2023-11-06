#include <iostream>
using namespace std;

// Declaring the function...
void swap(int a[], int i, int j);

// Function which sorts the array
int bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a, j + 1, j);
            }
        }
    }
}

// Swaping 2 elements
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
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
    bubbleSort(arr, n);
    cout << "Sorted Array: [";
    printArray(arr, n);
    cout << " ]" << endl;

    return 0;
}