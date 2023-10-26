#include <iostream>
using namespace std;

int main()
{

    int result;
    int n;

    // Loop is run the code for 10 times.
    for (int i = 0; i < 10; i++)
    {
        result = 0;
        n = 0;
        cout << "\nEnter value of N: ";
        cin >> n;

        // Just find how many 5's are in the factorial --> 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 = 10!
        //                                                              ^                   ^
        //                                                              | <- 1 * 5          | <- 2 * 5

        for (int i = 5; i <= n; i = i * 5) // <-- Formula: (n/5) + (n/25) + (n/125) + (n/625) + ......
        {
            result = result + n / i;
        }
        cout << "Result is " << result;
    }

    return 0;
}