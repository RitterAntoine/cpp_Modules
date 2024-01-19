#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int resultInt = maximum(5, 8);
    double resultDouble = maximum(3.14, 2.71);

    cout << "resultInt: " << resultInt << endl;
    cout << "resultDouble: " << resultDouble << endl;

    return 0;
}