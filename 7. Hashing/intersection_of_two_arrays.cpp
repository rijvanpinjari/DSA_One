#include <iostream>
#include <unordered_set>
using namespace std;

// a[] = {5, 10, 15, 5, 10}
// b[] = {15, 10}
// result = 2

// a[] = {3, 4, 5}
// b[] = {1, 2}
// result = 0

int main()
{
    int a[] = {5, 10, 15, 5, 10};
    int b[] = {15, 10, 5, 4};
    
    int count = 0;

    unordered_set<int>set;

    for(int element : a)
        set.insert(element);

    for(int element : b)
    {
        if (set.count(element) == 0)
            break;
        else
            count++;
            set.erase(element);
    }

    cout << count;

    return 0;
}
