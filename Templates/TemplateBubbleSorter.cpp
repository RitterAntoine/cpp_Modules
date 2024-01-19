#include <iostream>
using namespace std;

// Template function for performing bubble sort on an array of type T
template <class T>
void bubbleSort(T a[], int n) {
    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++)
        // Inner loop for each comparison in a pass
        for (int j = n - 1; i < j; j--)
            // Swap elements if they are in the wrong order
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

// Main function
int main() {
    // Integer array initialization
    int a[5] = { 10, 50, 30, 40, 20 };

    // Double array initialization
    double b[5] = { 1.1, 5.5, 3.3, 4.4, 2.2 };

    // Perform bubble sort on the integer array
    bubbleSort(a, 5);

    // Perform bubble sort on the double array
    bubbleSort(b, 5);

    // Display sorted integer array
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    // Display sorted double array
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;

    // Return 0 to indicate successful execution
    return 0;
}
