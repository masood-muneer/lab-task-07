#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int numbers[size];
    int positiveCount = 0, negativeCount = 0, oddCount = 0, evenCount = 0, zeroCount = 0;
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        if (numbers[i] > 0) positiveCount++;
        else if (numbers[i] < 0) negativeCount++;
        else zeroCount++;

        if (numbers[i] % 2 == 0) evenCount++;
        else oddCount++;
    }

    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Zeros: " << zeroCount << endl;

    return 0;
}