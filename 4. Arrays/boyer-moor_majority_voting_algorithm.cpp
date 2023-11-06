#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to find majority element
int find_Majority(int arr[], int n)
{
    int i, element = -1, count = 0;

    // Finding majority element
    for (i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = arr[i];
            count = 1;
        }
        else
        {
            if (arr[i] == element)
                count++;
            else
                count--;
        }
    }
    int count1 = 0;

    // Checking if majority element occurs more than n/2 times or not...
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
            count1++;
    }

    if (count1 > n / 2)
        return element;
    return -1;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority = find_Majority(arr, n);
    cout << " The majority element is : " << majority;
    return 0;
}
