#include <iostream>
#include <unordered_set>
using namespace std;

/*
 Important Functions in Hashing
    # insert()
    # find()
    # begin()
    # end()
    # clear()
    # size()
    # count()
*/

int main()
{
    unordered_set<int>s;
    s.insert(5);
    s.insert(10);
    s.insert(7);

    cout << s.count(5) << endl;

    if(s.count(9) == 0)
        cout << "Not Present" << endl;

    //---------------x--o--x---------------
    
    if (s.find(5) == s.end())
        cout << "Not found" << endl;

    else
        cout << "Found" << endl;

    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << " ";
    
    s.clear();

    cout << s.size() << endl;
    
    s.erase(10);
    s.erase(s.begin(), s.end());

    return 0;
}