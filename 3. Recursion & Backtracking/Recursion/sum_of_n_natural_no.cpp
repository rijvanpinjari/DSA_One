#include <iostream>
using namespace std;

// Function which gives the sum of 'n' natural no.
int sum(int n)
{
    if (n <= 1)
        return 1;

    return n + sum(n - 1); // --> This LoC performs Recurrsion
}

int main()
{
    int n;
    cout << "Enter the 'N' no.: ";
    cin >> n;

    cout << "Sum of " << n << " natural no. is " << sum(n);

    return 0;
}