// C++ program to print largest contiguous array sum
#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < size; i++)
    {
        currSum = currSum + a[i];
        if (maxSum < currSum)
            maxSum = currSum;

        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

// Driver Code
int main()
{
    int a[] = {5, -4, -2, 6, -1};
    int n = sizeof(a) / sizeof(a[0]);

    // Function Call
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
