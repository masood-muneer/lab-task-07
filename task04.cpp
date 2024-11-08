#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Numbers in reverse order:" << endl;
    for (int i = size - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}