#include <iostream>
#include <unordered_set>
using namespace std;

// merge both the arrays in a unordered_set
// arr1[] = {5, 10, 15, 5};
// arr2[] = {10, 15, 4, 6};
// result = {5, 10, 15, 4, 6}

int main()
{
    int arr1[] = {5, 10, 15, 5};
    int arr2[] = {10, 15, 4, 6};

    unordered_set<int>unionSet;
    
    for(int element: arr1)
        unionSet.insert(element);
        
    for(int element: arr2)
        unionSet.insert(element);

    cout << unionSet.size();

    return 0;
}