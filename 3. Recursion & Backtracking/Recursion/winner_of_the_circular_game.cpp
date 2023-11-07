#include <iostream>
using namespace std;

// Josephus problem / Winner of the circular game

// Declearing function..
int solve(int n, int k);

// Function is to get natural index against binary index
int findTheWinner(int n, int k)     //  If you want the answer in the binary index --> Remove this function, else keep it as it is...
{                                   //  0   1   2   3   4 --> Binary index
    int ans = solve(n, k) + 1;      // +1  +1  +1  +1  +1 --> Adding 1 to the binary index to get natural index
    return ans;                     //  1   2   3   4   5 --> Natural index
}

// Function which finds the Winner of the circular game
// Main logic
int solve(int n, int k)
{
    if (n == 1) // Base Condition
        return 0;

    return (solve(n - 1, k) + k) % n; // --> This LoC performs Recurrsion
}

int main()
{
    int n, k;

    cout << "Enter 'n': ";
    cin >> n;
    cout << "Enter 'k': ";
    cin >> k;

    cout <<"Winner of the circular game is "<< findTheWinner(n, k);  // Natural index
    // cout <<"Winner of the circular game is "<< solve(n, k);  // Binary index

    return 0;
}