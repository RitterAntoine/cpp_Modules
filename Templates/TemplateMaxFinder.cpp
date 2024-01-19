#include <iostream>
using namespace std;

// Template function to find the maximum of two values of the same type
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Main function
int main() {
    // Call the maximum function with integers 5 and 8
    int resultInt = maximum(5, 8);

    // Call the maximum function with doubles 3.14 and 2.71
    double resultDouble = maximum(3.14, 2.71);

    // Display the result of the integer comparison
    cout << "resultInt: " << resultInt << endl;

    // Display the result of the double comparison
    cout << "resultDouble: " << resultDouble << endl;

    // Return 0 to indicate successful execution
    return 0;
}
