#include <iostream>
using namespace std;

int main()
{
    int n, a, r, s = 0;

    cout << "\nEnter The Number: ";
    cin >> n;
    a = n; // <-- The value of 'n' is stored in 'a', because due to loop value of 'n' changes'

    while (n > 0)
    {                       // eg. 407      if (a == s) --> palindrome no.    else --> not a palindrome no.
    //                      // n = 407; r = 7; s = 7     // n = 40; r = 0; s = 70    // n = 4; r = 4; s = 704
        r = n % 10;         // r = 407 % 10 = 7          // r = 40 % 10 = 0          // r = 4 % 10 =4
        s = s * 10 + r;     // s = 0 * 10 + 7 = 7        // s = 7 * 10 + 0 = 70      // s = 70 * 10 + 4 = 704
        n = n / 10;         // n = 407 / 10 = 40         // n = 40 / 10 = 4          // n = 4 / 10 = 0
    }

    if (a == s)
    {
        cout << a << " is a palindrome no." << endl;
    }
    else
    {
        cout << a << " is not a palindrome no." << endl;
    }

    return 0;
}