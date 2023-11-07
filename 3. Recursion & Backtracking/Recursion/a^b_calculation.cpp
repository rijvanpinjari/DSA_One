#include <iostream>
using namespace std;

// Function which gives the calculation of a^b
int power(int a, int b)
{
    if (b == 0) // Base Condition
        return 1;

    return (power(a, b - 1) * a); // --> This LoC performs Recurrsion
}

int main()
{
    int a;
    int b;
    cout << "Enter the 'a': ";
    cin >> a;
    cout << "Enter the 'b': ";
    cin >> b;

    cout << "Calculation of " << a << "^" << b << " is " << power(a, b);

    return 0;
}