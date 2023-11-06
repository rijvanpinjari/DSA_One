#include <iostream>
using namespace std;

// Function which sorts the array
int insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
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
    insertionSort(arr, n);
    cout << "Sorted Array: [";
    printArray(arr, n);
    cout << " ]" << endl;

    return 0;
}