#include <iostream>
using namespace std;

// Function which finds the no. of ways in n*m block
int count(int n, int m)
{
    if (n == 1 || m == 1) // Base Condition
        return 1;
    return count(n - 1, m) + count(m, n - 1); // --> This LoC performs Recurrsion
}

int main()
{
    int n;
    int m;
    cout << "Enter the 'n': ";
    cin >> n;
    cout << "Enter the 'm': ";
    cin >> m;

    cout << count(n, m) << " number of ways are in " << n << "*" << m << ".";
    return 0;
}