#include <iostream>
using namespace std;
void Mystery() {
    char ch;
    cin.get(ch);
    if (ch != '\n') {
        Mystery();
        cout.put(ch);
    }
}

int main() {
    cout << "Enter a line of text: ";
    Mystery();
    cout << std::endl;

    return 0;
}
