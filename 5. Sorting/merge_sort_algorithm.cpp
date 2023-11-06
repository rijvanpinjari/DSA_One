#include <iostream>
using namespace std;

// Declaring the functions...
int merge(int arr[], int left, int mid, int right);

// Function which sorts the array with the help of 'merge' function
int mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int merge(int arr[], int left, int mid, int right)
{
    int n1 = (mid - left + 1);
    int n2 = right - mid;

    int a[n1];
    int b[n2]; // temp arrays

    for (int i = 0; i < n1; i++)
        a[i] = arr[left + i];

    for (int i = 0; i < n2; i++)
        b[i] = arr[mid + 1 + i];

    int i = 0;
    int j = 0;
    int k = left;

    // Small element print first --> if (i < j), print 'i' || else, print'j'
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    // If 'j' is over --> print remaining 'i' elements..
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    // If 'i' is over --> print remaining 'j' elements..
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
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
    mergeSort(arr, 0, n);
    cout << "Sorted Array: [";
    printArray(arr, n);
    cout << " ]" << endl;

    return 0;
}