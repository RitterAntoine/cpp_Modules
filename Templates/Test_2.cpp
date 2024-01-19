#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

int main()
{
    int a[5] = { 10, 50, 30, 40, 20 };
    double b[5] = { 1.1, 5.5, 3.3, 4.4, 2.2 };

    bubbleSort(a, 5);
    bubbleSort(b, 5);

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;

    return 0;
}