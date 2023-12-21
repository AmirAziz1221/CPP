#include <iostream>
using namespace std;

int partition(int arr[], int low, int high, int& comparisons) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; ++j) {
        comparisons++;
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, int& comparisons) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high, comparisons);

        quickSort(arr, low, pivotIndex - 1, comparisons);
        quickSort(arr, pivotIndex + 1, high, comparisons);
    }
}

int main() {
    int arr[] = {64, 25, 44, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisons = 0;

    quickSort(arr, 0, n - 1, comparisons);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Comparisons made: " << comparisons << endl;

    return 0;
}
