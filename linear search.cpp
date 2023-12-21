#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key, int& comparisons) {
    for (int i = 0; i < n; ++i) {
        comparisons++;
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 22;
    int comparisons = 0;

    int result = linearSearch(arr, n, key, comparisons);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    cout << "Comparisons made: " << comparisons << endl;

    return 0;
}
