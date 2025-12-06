#include <bits/stdc++.h>
using namespace std;

int main(){
    array<int, 5> arr = {6, 7, 8, 4, 3};
    
    // Print elements using iterators
    cout << "First element (begin): " << *arr.begin() << endl;   // Prints the first element
    cout << "Last element (rbegin): " << *arr.rbegin() << endl;  // Prints the last element
    cout << "Last element (end): " << *arr.end() << endl;
    cout << "Last element (rend): " << *arr.rend() << endl;
    // Loop through all elements using iterators
    cout << "Elements: ";
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";  // Dereference iterator to print value
    }
    cout << endl;

    return 0;
}
