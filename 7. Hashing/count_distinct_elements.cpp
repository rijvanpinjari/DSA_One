#include <iostream>
#include <unordered_set>
using namespace std;

// a[] = {5, 10, 15, 5, 4, 5}; --> count distict element in an array;
// result = 4

int countDistinct(int a[], int n)
{
    unordered_set<int>set;

    for(int i = 0; i < n; i++)
        set.insert(a[i]);

    return set.size();
}   

int main()
{
    int a[] = {5, 10, 15, 5, 4, 5};
    int n = (sizeof(a) / sizeof(a[0]));

    cout << countDistinct(a, n);

    return 0;
}