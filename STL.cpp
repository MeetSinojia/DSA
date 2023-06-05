// MULTISET
// A multiset in STL is an associative container just like a set the only difference is it can store duplicate elements in it.

// UNORDERED SET
// An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.

// Custom Comparator
bool customComparator(const pair<int, pair<int, int>> &p1, const pair<int, pair<int, int>> &p2)
{
    if (p1.first != p2.first)
    {
        return p1.first < p2.first;
    }
    return p1.second.second < p2.second.second;
}

// __builtin_popcount()
cout << __builtin_popcount(2);
cout << __builtin_popcountll(2) // If number is long long

// next_permutation
int arr[] = {1, 3, 2};
next_permutation(arr, arr + 3); // using in-built function of C++
