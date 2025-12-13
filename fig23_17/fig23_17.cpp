#include <iostream>
using std::cout;
using std::endl;

#include <list>
#include <algorithm>
#include <iterator>

template <typename T> void printList(const std::list<T> &listRef);

int main()
{
    const int SIZE = 4;

    int array[SIZE] = {2, 6, 4, 8};
    std::list<int> values;
    std::list<int> otherValues;

    values.push_front(1);
    values.push_front(2);
    values.push_front(4);
    values.push_front(3);

    cout << "values contains: ";
    printList(values);

    values.sort();
    cout << "\nvalues after sorting contains: ";
    printList(otherValues);
}