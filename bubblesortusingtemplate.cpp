#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    int arr[5] = {5, 2, 9, 1, 6};
    bubbleSort(arr, 5);
    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}

