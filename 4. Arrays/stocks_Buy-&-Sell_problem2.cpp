#include <iostream>
using namespace std;

// Function to find maxProfit multiple time and print total maxProfit
int maxProfit(int a[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            profit += (a[i] - a[i - 1]);
        }
    }
    return profit;
}

int main()
{
    int a[] = {5, 2, 6, 1, 4};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Maximum profit is " << maxProfit(a, n);
    return 0;
}