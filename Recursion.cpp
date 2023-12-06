#include <iostream>
using namespace std;
int factorial(const int N) {
    // Base cases
    if (N == 0 || N == 1)
        return 1;
    else
        return (N * factorial(N - 1));
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." <<endl;
    } else {
        int result = factorial(number);
        cout << "Factorial of " << number << " is: " << result <<endl;
    }

    return 0;
}
