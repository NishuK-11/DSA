#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int N;

    cout << "Enter the length of the string: ";
    cin >> N;

    // Validate the input length
    if (N <= 0) {
        cout << "Invalid length. Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Enter the string: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, s);

    // Validate the input string length
    if (s.length() != N) {
        cout << "The length of the entered string does not match the specified length." << endl;
        return 1;
    }

    cout << "Your entered string is: " << s << endl;

    return 0;
}