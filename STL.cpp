// MULTISET
// A multiset in STL is an associative container just like a set the only difference is it can store duplicate elements in it.

// UNORDERED SET
// An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.

struct CustomComparator {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
        // Compare the first elements of the pairs
        if (a.first < b.first)
            return true;
        else if (a.first > b.first)
            return false;
        
        // If the first elements are equal, compare the second elements
        return a.second < b.second;
    }
};

// Declaration of priority queue using the custom comparator
priority_queue<pair<int, int>, vector<pair<int, int>>, CustomComparator> pq;

// __builtin_popcount()
cout << __builtin_popcount(2);
cout << __builtin_popcountll(2) // If number is long long

// next_permutation
int arr[] = {1, 3, 2};
next_permutation(arr, arr + 3); // using in-built function of C++

// next_permutation for the string will return true if it is possible
bool val = next_permutation(s.begin(), s.end());

// Multiset
// can find max and min and add and remove elements in log(N)
multiset<int> st;
maxi = *st.rbegin();
mini = *st.begin();
st.erase(st.find(x]));
st.insert(x);
