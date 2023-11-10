#include <bits/stdc++.h>
using namespace std;

// Main Logic
bool isPalin(char str[], int left, int right)
{
    if (left == right)
        return true;

    if (str[left] != str[right])
        return false;

    return (str, left + 1, right - 1);
}

// Function which runs main logic and find the number is palindrome or not
bool isPalindrome(char str[])
{
    int n = strlen(str);

    if (n == 0) // --> Base condition
        return true;

    return isPalin(str, 0, n - 1); // --> LoC which performs recursion
}

int main()
{
    char str[] = "malayalam";

    if (isPalindrome(str))
        cout << str << " is a Palindrome_String";
    else
        cout << str << " is not a Palindrome_String";

    return 0;
}