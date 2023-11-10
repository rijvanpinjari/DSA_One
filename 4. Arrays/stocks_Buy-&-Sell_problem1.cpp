#include <iostream>
using namespace std;

// Function to find maxProfit
int maxProfit(int a[], int n)
{
    int maxProfit = 0;
    int minSoFar = a[0];

    for (int i = 0; i < n; i++)
    {
        minSoFar = min(minSoFar, a[i]);
        int profit = a[i] - minSoFar;
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

int main()
{
    int a[] = {5, 2, 6, 1, 4};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Maximum profit is " << maxProfit(a, n);
    return 0;
}