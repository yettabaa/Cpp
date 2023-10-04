#include <iostream>
#include <vector>
#include <list>
#include <deque>
int binarySearch(std::vector<int> arr, int l, int r, int x)
{
    int m;
    while (l <= r) {
        m = l + (r - l) / 2;
 
        // Check if x is present at mid
        // printf("arr = %d x = %d\n", arr[m], x);
        if (arr[m] == x)
            return m;
        // If x greater, ignore left half
        // if (arr[m] < x)
        //     l = m + 1;
        (arr[m] < x) ? l = m + 1 : r = m - 1;
 
        // If x is smaller, ignore right half
        // else
        //     r = m - 1;
    }
 
    // If we reach here, then element was not present
    return l;
}
// template <typename Container, typename T>
// typename Container::iterator binarySearch(Container& container, typename Container::iterator left, typename Container::iterator right, const T& value) {
//     while (left != right) {
//         typename Container::iterator mid = left;
//         std::advance(mid, std::distance(left, right) / 2);
//         if (*mid < value) {
//             ++mid; // Move mid one position to the right
//             left = mid;
//         } else {
//             right = mid;
//         }
//     }
//     return left;
// }
int main() {
    std::vector<int> as; // Use std::vector

    // Fill the container with some values
    as.push_back(5);
    as.push_back(3);
    as.push_back(1);
    as.push_back(4);
    as.push_back(2);

    std::vector<int> sortedDeque;

    sortedDeque.reserve(as.size());
    for (std::vector<int>::iterator itr = as.begin(); itr != as.end(); ++itr) {
        size_t i = std::distance(as.begin(), itr);
        if (!i)
        {
            sortedDeque.insert(sortedDeque.begin(), *itr);
            continue;    
        }
        int binary = binarySearch(sortedDeque, 0, sortedDeque.size(), *itr);
        if (i == binary)
            continue;
        printf("binary = %d itr = %d size = %lu\n", binary, *itr, sortedDeque.size());
        sortedDeque.insert(sortedDeque.begin() + binary, *itr);
    }

    // sortedDeque.insert(sortedDeque.begin(), 7);
    // sortedDeque.insert(sortedDeque.begin() + 5, 7);
    // // Print the sorted container
    for (std::vector<int>::iterator itr = sortedDeque.begin(); itr != sortedDeque.end(); ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

    return 0;
}