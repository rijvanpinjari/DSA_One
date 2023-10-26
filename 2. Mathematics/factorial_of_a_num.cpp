#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        // n! = n * (n - 1)!  <-- formula
        // factorial = factorial * i;   // <--| Both are the samw.
        factorial *= i;                 // <--| 
    }
    cout << factorial;
    return 0;
}