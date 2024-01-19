#include <iostream>
using namespace std;

// Template class for a dynamic array with print functionality
template <typename T>
class Array
{
private:
    T *ptr;   // Pointer to the dynamically allocated array
    int size; // Size of the array

public:
    // Constructor: Initializes the array with elements from the given array
    Array(T arr[], int s);
    
    // Function to print the elements of the array
    void print();
};

// Constructor implementation for the Array class
template <typename T>
Array<T>::Array(T arr[], int s)
{
    // Dynamically allocate memory for the array
    ptr = new T[s];
    size = s;

    // Copy elements from the given array to the dynamically allocated array
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

// Function implementation to print the elements of the array
template <typename T>
void Array<T>::print()
{
    // Loop through the elements and print each one
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);

    // Move to the next line after printing all elements
    cout << endl;
}

// Main function
int main()
{
    // Initialize a regular integer array
    int arr[5] = {1, 2, 3, 4, 5};

    // Create an instance of the Array class with integers and initialize it with the given array
    Array<int> a(arr, 5);

    // Print the elements of the array using the print function
    a.print();

    // Return 0 to indicate successful execution
    return 0;
}
